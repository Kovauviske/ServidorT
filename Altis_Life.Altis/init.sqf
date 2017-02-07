StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";
[] execVM "core\scripts\fn_statusBar.sqf";
[] execVM "intro\fn_introtext.sqf"; 


StartProgress = true;

DYNAMICMARKET_boughtItems = [];
[player] remoteExec ["TON_fnc_playerLogged",RSERV];
