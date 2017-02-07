#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    case civilian: {
        //if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_WorkerCoveralls") then {
                player setObjectTextureGlobal [0, ""];
            };
            if (uniform player isEqualTo "U_I_CombatUniform" && Clan_Rebel isEqualTo "The Forsaken Kings") then {
                player setObjectTextureGlobal [0, ""];
            };
        };

    case west: {
        if (uniform player isEqualTo "U_BG_Guerrilla_6_1") then {
            player setObjectTextureGlobal [0, "textures\police\clothing\blackpoliceuniform.paa"];
        };
        if (uniform player isEqualTo "U_B_CTRG_1") then {
            player setObjectTextureGlobal [0, "textures\police\clothing\tfu.paa"];
        };
		if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\police_uniform_blackyellow.paa"];
        };
        if (backpack player != "") then {
            (backpackContainer player) setObjectTextureGlobal [0, ""];
        };
        if (vest player != "") then {
            (vestContainer player) setObjectTextureGlobal [0, ""];
        };
    };

	case independent: {
        if (uniform player isEqualTo "U_Marshal") then {
            player setObjectTextureGlobal [0, "textures\ams\clothing\uniformams.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\ams\clothing\paramedic_uniform_hv.paa"];
        };
        if (uniform player isEqualTo "U_O_OfficerUniform_ocamo") then {
            player setObjectTextureGlobal [0, "textures\ams\clothing\aruuniform.paa"];
        };
        if (backpack player != "") then {
            (backpackContainer player) setObjectTextureGlobal [0, ""];
        };
    };
	
	case east: {
                if (uniform player isEqualTo "U_Marshal") then {
            player setObjectTextureGlobal [0, ""];
        };
                if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, ""];
        };
                if (uniform player isEqualTo "U_O_OfficerUniform_ocamo") then {
            player setObjectTextureGlobal [0, ""];
        };
		        if (backpack player != "") then {
                    if (backpack player isEqualTo "B_Bergen_mcamo_F") then {} else {
            (backpackContainer player) setObjectTextureGlobal [0, ""];};
        };
    };
};