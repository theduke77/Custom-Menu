disableSerialization;
///////////////////
//////Config//////
/////////////////

_serverName = "Your Gaming Community"; // the server name that will go accross the top of the menu

_ts3IP = "TS3 - TS3.yoursite.com"; // ts3 ip that will go at the bottom of the menu

_websiteUrl = "www.yoursite.com"; // website url that goes at the bottom of the menu 


////////////////////////////////////////////
////////////////////ACTIONS////////////////
//////////////////////////////////////////

_action1Text = "Suicide"; //Text that will go on action button 1
action1script = {((ctrlParent (_this select 0)) closeDisplay 7777); execvm 'custom\menu\scripts\suicide.sqf';}; //script that action button 1 will use

_action2Text = "Action 2"; //Text that will go on action button 2
action2script = {((ctrlParent (_this select 0)) closeDisplay 7777); execvm 'custom\menu\scripts\yourscript.sqf';}; //script that action button 2 will use

_info1Text = "Rules"; //Text that will go on info button 1
info1script = {((ctrlParent (_this select 0)) closeDisplay 7777); execvm 'custom\menu\rules_init.sqf';}; //script that info button 1 will use

_info2Text = "Info 2"; //Text that will go on info button 2
info2script = {((ctrlParent (_this select 0)) closeDisplay 7777); createDialog "info2";}; //script that info button 2 will use

_info3Text = "Info 3"; //Text that will go on info button 3
info3script = {((ctrlParent (_this select 0)) closeDisplay 7777); createDialog "info3";}; //script that action info 3 will use

_info4Text = "Info 4"; //Text that will go on info button 4
info4script = {((ctrlParent (_this select 0)) closeDisplay 7777); createDialog "info4";}; //script that action info 4 will use


///////////////////////////////////////////////
//////////////DEPLOYABLES/////////////////////
/////////////////////////////////////////////


_deployable1Text = "Bike"; //Text that will go on deployable button 1
_deploy1item1Text = "ToolBox"; //Text that will go in the number 1 item slot under the first deploy button 
_deploy1item2Text = ""; //Text that will go in the number 2 item slot under the first deploy button 
_deploy1item3Text = ""; //Text that will go in the number 3 item slot under the first deploy button 
_deploy1item4Text = ""; //Text that will go in the number 4 item slot under the first deploy button 
_deploy1item5Text = ""; //Text that will go in the number 5 item slot under the first deploy button 
deployable1script = {execvm 'custom\menu\scripts\deploy_bike.sqf';};//script that deploy button 1 will use

_deployable2Text = "Deploy Item 2"; //Text that will go on deployable button 2
_deploy2item1Text = ""; //Text that will go in the number 1 item slot under the Second deploy button 
_deploy2item2Text = ""; //Text that will go in the number 2 item slot under the Second deploy button 
_deploy2item3Text = ""; //Text that will go in the number 3 item slot under the Second deploy button 
_deploy2item4Text = ""; //Text that will go in the number 4 item slot under the Second deploy button 
_deploy2item5Text = ""; //Text that will go in the number 5 item slot under the Second deploy button 
deployable2script = {((ctrlParent (_this select 0)) closeDisplay 7777); execvm 'custom\menu\scripts\deploy_2.sqf';}; //script that deploy button 2 will use

_deployable3Text = "Deploy Item 3"; //Text that will go on deployable button 3
_deploy3item1Text = ""; //Text that will go in the number 1 item slot under the third deploy button 
_deploy3item2Text = ""; //Text that will go in the number 2 item slot under the third deploy button 
_deploy3item3Text = ""; //Text that will go in the number 3 item slot under the third deploy button 
_deploy3item4Text = ""; //Text that will go in the number 4 item slot under the third deploy button 
_deploy3item5Text = ""; //Text that will go in the number 5 item slot under the third deploy button 
deployable3script = {((ctrlParent (_this select 0)) closeDisplay 7777); execvm 'custom\menu\scripts\deploy_3.sqf';}; //script that deploy button 3 will use



createDialog "menu";


////////////////////////////////
//DO NOT EDIT BELLOW THIS LINE//
////////////////////////////////
fnc_update_all_text = {
_finddialog = findDisplay 7777;
(_finddialog displayCtrl 1609) ctrlSetText format["%1",_action1Text];
(_finddialog displayCtrl 1610) ctrlSetText format["%1",_action2Text];
(_finddialog displayCtrl 1611) ctrlSetText format["%1",_info1Text];
(_finddialog displayCtrl 1612) ctrlSetText format["%1",_info2Text];
(_finddialog displayCtrl 1613) ctrlSetText format["%1",_info3Text];
(_finddialog displayCtrl 1618) ctrlSetText format["%1",_info4Text];
(_finddialog displayCtrl 1614) ctrlSetText format["%1",_deployable1Text];
(_finddialog displayCtrl 1615) ctrlSetText format["%1",_deployable2Text];
(_finddialog displayCtrl 1616) ctrlSetText format["%1",_deployable3Text];
(_finddialog displayCtrl 1007) ctrlSetText format["%1",_deploy1item1Text];
(_finddialog displayCtrl 1008) ctrlSetText format["%1",_deploy1item2Text];
(_finddialog displayCtrl 1009) ctrlSetText format["%1",_deploy1item3Text];
(_finddialog displayCtrl 1010) ctrlSetText format["%1",_deploy1item4Text];
(_finddialog displayCtrl 1011) ctrlSetText format["%1",_deploy1item5Text];
(_finddialog displayCtrl 1012) ctrlSetText format["%1",_deploy2item1Text];
(_finddialog displayCtrl 1013) ctrlSetText format["%1",_deploy2item2Text];
(_finddialog displayCtrl 1014) ctrlSetText format["%1",_deploy2item3Text];
(_finddialog displayCtrl 1015) ctrlSetText format["%1",_deploy2item4Text];
(_finddialog displayCtrl 1016) ctrlSetText format["%1",_deploy2item5Text];
(_finddialog displayCtrl 1017) ctrlSetText format["%1",_deploy3item1Text];
(_finddialog displayCtrl 1018) ctrlSetText format["%1",_deploy3item2Text];
(_finddialog displayCtrl 1019) ctrlSetText format["%1",_deploy3item3Text];
(_finddialog displayCtrl 1020) ctrlSetText format["%1",_deploy3item4Text];
(_finddialog displayCtrl 1021) ctrlSetText format["%1",_deploy3item5Text]; 
(_finddialog displayCtrl 1001) ctrlSetText format["%1",_websiteUrl];
(_finddialog displayCtrl 1002) ctrlSetText format["%1",_ts3IP];
(_finddialog displayCtrl 10003) ctrlSetText format["%1",_ts3IP];
(_finddialog displayCtrl 1000) ctrlSetText format["%1 Menu",_serverName];
};

call fnc_update_all_text;




