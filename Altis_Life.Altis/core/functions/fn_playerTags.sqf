#include "..\..\script_macros.hpp"
/*
    File: fn_playerTags.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};


_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
_units = _units - [player];

//Fix for hanging nametags on the screen
if(!isNull _ui) then {
    {
        _idc = _ui displayCtrl _x;
        _idc ctrlShow false;
    } forEach life_nametags;
};

life_nametags = [];

_masks = LIFE_SETTINGS(getArray,"clothing_masks");

{
    private "_text";
    _idc = _ui displayCtrl (iconID + _forEachIndex);
    if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
        _pos = switch (typeOf _x) do {
            case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
            case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
            default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
        };

        _sPos = worldToScreen _pos;
        _distance = _pos distance player;
        if ((!((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks)) && (alive _x)) then {
            if (count _sPos > 1 && {_distance < 15}) then {
                _text = switch (true) do {
                    case (_x in (units group player) && playerSide isEqualTo civilian): {format["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];};
                    case (side _x isEqualTo west && {!isNil {_x getVariable "rank"}}): {format["<img image='%1' size='1'></img><t color='#42b6f4'>%3</t> %2",switch ((_x getVariable "rank")) do {
                        case 2: {"textures\police\ranks\c.paa"};
                        case 3: {"textures\police\ranks\sc.paa"};
                        case 4: {"textures\police\ranks\sgt.paa"};
                        case 5: {"textures\police\ranks\dsgt.paa"};
                        case 6: {"textures\police\ranks\ins.paa"};
                        case 7: {"textures\police\ranks\dcc.paa"};
                        case 8: {"textures\police\ranks\cc.paa"};
                        case 9: {"textures\police\ranks\dcom.paa"};
                        case 10: {"textures\police\ranks\com.paa"};
                        default {"textures\police\ranks\pcso.paa"};
                        },_x getVariable ["realname",name _x],
						switch ((_x getVariable "rank")) do {
                        case 2: {"Constable"};
                        case 3: {"Captain"};
                        case 4: {"Sheriff};
                        case 5: {"Inspector"};
                        case 6: {"Sargent"};
                        case 7: {"Sargent Major"};
                        case 8: {"Inspector"};
						case 9: {"Sheriff"};
						case 10: {"Deputy"};
                        default {"Sargent Major"};
                        }]};
                     case (side _x isEqualTo independent && {!isNil {_x getVariable "medrank"}}): {format["<img image='%1' size='1'></img><t color='#0f3301'> %3</t> %2",switch ((_x getVariable "medrank")) do {
                        case 2: {"textures\ams\ranks\fr.paa"};
                        case 3: {"textures\ams\ranks\par.paa"};
                        case 4: {"textures\ams\ranks\sur.paa"};
                        case 5: {"textures\ams\ranks\doc.paa"};
                        case 6: {"textures\ams\ranks\gp.paa"};
                        case 7: {"textures\ams\ranks\cmo.paa"};
                        default {"textures\ams\ranks\stu.paa"};
                        },_x getVariable ["realname",name _x],
                        switch ((_x getVariable "medrank")) do {
                        case 2: {"FR"};
                        case 3: {"PAR"};
                        case 4: {"SUR"};
                        case 5: {"DOC"};
                        case 6: {"CST"};
                        case 7: {"CMO"};
                        default {"STU"};
                        }]};
                    default {
                        if (!isNil {(group _x) getVariable "gang_name"}) then {
                            format["%1<br/><t size='0.8' color='#00FF00'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]];
                        } else {
                            _x getVariable ["realname",name _x];
                        };
                    };
                };
				if(_x getVariable ["speaking",false]) then {_text = "<img image='\A3\ui_f\data\igui\rscingameui\rscdisplayvoicechat\microphone_ca.paa' size='1.2'></img> " + _text };
                _idc ctrlSetStructuredText parseText _text;
                _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
                _idc ctrlSetScale scale;
                _idc ctrlSetFade 0;
                _idc ctrlCommit 0;
                _idc ctrlShow true;
            } else {
                _idc ctrlShow false;
            };
        } else {
            _idc ctrlShow false;
        };
    } else {
        _idc ctrlShow false;
    };
} forEach _units;
