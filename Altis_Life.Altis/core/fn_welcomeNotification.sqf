/*
    File: fn_welcomeNotification.sqf
    Author:

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\logo.jpg' /></t><br /><br />";
_message = _message + "Useful Links (click on the links to open your browser)<br /><br />";
_message = _message + " <a href='http://project-narnia.azurewebsites.net' color='#56BDD6'>Project Narnias Homepage</a> -- Our Website, check it out for the latest news, updates and rules.<br />";
_message = _message + "TeamSpeak 3 Address:	81.19.218.226:10057<br />";
_message = _message + "Server Rules:<a href='http://project-narnia.azurewebsites.net/rules.php' color='#56BDD6'>Out Now!</a><br /><br />";
_message = _message + "Useful Controls<br /><br />";
_message = _message + "Hands up: Shift + J<br />";
_message = _message + "Holster Weapon: Shift + H<br />";
_message = _message + "un-holster Weapon: Ctrl + H<br />";
_message = _message + "Knock someone out: shift+ G (you need a weapon in hand)";
_message = _message + "Ear Plugs: Shift + O (voices remain high whilst vehicles go quiet)<br />";
_message = _message + "Force Feed: Insert (Person needs to be restrained)<br />";
_message = _message + "Blindfold: Shift + B<br />";
_message = _message + "General Interaction Key: Windows Key<br />";



//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
