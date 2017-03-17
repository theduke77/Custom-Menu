class menu
{
    idd = 7777;
    movingenable=false;
	class Controls
	{ 
class slk_frame: slkRscFrame
{
	idc = 1801;
	text = ""; //--- ToDo: Localize;
	x = 0.216406 * safezoneW + safezoneX;
	y = 0.1304 * safezoneH + safezoneY;
	w = 0.567187 * safezoneW;
	h = 0.748 * safezoneH;
};
class slk_bg: slkIGUIBack
{
	idc = 2200;
	text = ""; //--- ToDo: Localize;
	x = 0.212281 * safezoneW + safezoneX;
	y = 0.1194 * safezoneH + safezoneY;
	w = 0.5775 * safezoneW;
	h = 0.77 * safezoneH;
	colorBackground[] = {0,0,0,0.8};
};
class slk_bgl1: slkIGUIBack
{
	idc = 2201;

	x = 0.212281 * safezoneW + safezoneX;
	y = 0.1106 * safezoneH + safezoneY;
	w = 0.5775 * safezoneW;
	h = 0.132 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class slk_title: slkRscText
{
	idc = 1000;
	text = "Server Name"; //--- ToDo: Localize;
	x = 0.37522 * safezoneW + safezoneX;
	y = 0.126 * safezoneH + safezoneY;
	w = 0.2475 * safezoneW;
	h = 0.033 * safezoneH;
	sizeEx = 0.050;
	style = 2;
};
class slk_web: slkRscText
{
	idc = 1001;
	text = "Website"; //--- ToDo: Localize;
	x = 0.377281 * safezoneW + safezoneX;
	y = 0.1766 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
	sizeEx = 0.040;
	style = 2;
};
class slk_ts3: slkRscText
{
	idc = 1002;
	text = "Teamspeak"; //--- ToDo: Localize;
	x = 0.535349 * safezoneW + safezoneX;
	y = 0.176733 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
	sizeEx = 0.040;
	style = 2;
};
class slk_view_title: slkRscText
{
	idc = 1003;
	text = "View Distance"; //--- ToDo: Localize;
	x = 0.449466 * safezoneW + safezoneX;
	y = 0.2382 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	sizeEx = 0.050;
	style = 2;
};
class slk_picl: slkRscPicture
{
	idc = 1200;
	text = "custom\menu\logo.paa";
	x = 0.221562 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.128906 * safezoneW;
	h = 0.077 * safezoneH;
};
class slk_action_title: slkRscText
{
	idc = 1004;
	text = "Actions"; //--- ToDo: Localize;
	x = 0.29684 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.022 * safezoneH;
	sizeEx = 0.050;
	style = 2;
};
class slk_view1: slkRscButton
{
	idc = 1600;
	text = "1000"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 1000; systemChat('ViewDistance: 1000');";
};
class slk_view2: slkRscButton
{
	idc = 1601;
	text = "1500"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 1500; systemChat('ViewDistance: 1500');";
};
class slk_view3: slkRscButton
{
	idc = 1602;
	text = "2000"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 2000; systemChat('ViewDistance: 2000');";
};
class slk_view4: slkRscButton
{
	idc = 1603;
	text = "2500"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 2500; systemChat('ViewDistance: 2500');";
};
class slk_view5: slkRscButton
{
	idc = 1604;
	text = "3000"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 3000; systemChat('ViewDistance: 3000');";
};
class slk_view6: slkRscButton
{
	idc = 1605;
	text = "3500"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 3500; systemChat('ViewDistance: 3500');";
};
class slk_view7: slkRscButton
{
	idc = 1606;
	text = "4000"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 4000; systemChat('ViewDistance: 4000');";
};
class slk_view8: slkRscButton
{
	idc = 1607;
	text = "4500"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 4500; systemChat('ViewDistance: 4500');";
};
class slk_view9: slkRscButton
{
	idc = 1608;
	text = "5000"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.643 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "setViewDistance 5000; systemChat('ViewDistance: 5000');";
};
class slk_act: slkRscButton
{
	idc = 1609;
	text = "Action 1"; //--- ToDo: Localize;
	x = 0.268997 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call action1script;";
};
class slk_act2: slkRscButton
{
	idc = 1610;
	text = "Action 2"; //--- ToDo: Localize;
	x = 0.268997 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call action2script;";
};
class slk_info: slkRscText
{
	idc = 1005;
	text = "Information"; //--- ToDo: Localize;
	x = 0.289622 * safezoneW + safezoneX;
	y = 0.4428 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.033 * safezoneH;
	sizeEx = 0.050;
	style = 2;
};
class slk_info1: slkRscButton
{
	idc = 1611;
	text = "Info 1"; //--- ToDo: Localize;
	x = 0.268997 * safezoneW + safezoneX;
	y = 0.5022 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call info1script;";
};
class slk_info2: slkRscButton
{
	idc = 1612;
	text = "Info 2"; //--- ToDo: Localize;
	x = 0.268997 * safezoneW + safezoneX;
	y = 0.5792 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call info2script;";
};
class slk_info3: slkRscButton
{
	idc = 1613;
	text = "Info 3"; //--- ToDo: Localize;
	x = 0.268997 * safezoneW + safezoneX;
	y = 0.6606 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call info3script;";
};

class slk_info4: slkRscButton
{
	idc = 1618;
	text = "Info 4"; //--- ToDo: Localize;
	x = 0.268997 * safezoneW + safezoneX;
	y = 0.742 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call info4script;";
};

class slk_deployables: slkRscText
{
	idc = 1006;
	text = "Deployables"; //--- ToDo: Localize;
	x = 0.644385 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.022 * safezoneH;
	sizeEx = 0.050;
	style = 2;
};
class slk_dep_1: slkRscButton
{
	idc = 1614;
	text = "Deploy 1"; //--- ToDo: Localize;
	x = 0.626853 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call deployable1script;";
};
class slk_dep_item1: slkRscText
{
	idc = 1007;
	text = "Item 1"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep_item2: slkRscText
{
	idc = 1008;
	text = "Item 2"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep_item3: slkRscText
{
	idc = 1009;
	text = "Item 3"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.3658 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep_item4: slkRscText
{
	idc = 1010;
	text = "Item 4"; //--- ToDo: Localize;
	x = 0.629179 * safezoneW + safezoneX;
	y = 0.389474 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class esk_dep_2: slkRscButton
{
	idc = 1615;
	text = "Deploy 2"; //--- ToDo: Localize;
	x = 0.626853 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call deployable2script;";
};
class slk_dep_item5: slkRscText
{
	idc = 1011;
	text = "Item 5"; //--- ToDo: Localize;
	x = 0.629947 * safezoneW + safezoneX;
	y = 0.4098 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep2_item1: slkRscText
{
	idc = 1012;
	text = "Item 1"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep2_item2: slkRscText
{
	idc = 1013;
	text = "Item 2"; //--- ToDo: Localize;
	x = 0.629946 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep2_item3: slkRscText
{
	idc = 1014;
	text = "Item 3"; //--- ToDo: Localize;
	x = 0.629947 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep2_item4: slkRscText
{
	idc = 1015;
	text = "Item 4"; //--- ToDo: Localize;
	x = 0.629947 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep2_item5: slkRscText
{
	idc = 1016;
	text = "Item 5"; //--- ToDo: Localize;
	x = 0.629947 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep_3: slkRscButton
{
	idc = 1616;
	text = "Deploy 3"; //--- ToDo: Localize;
	x = 0.626853 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call deployable3script;";
};
class slk_dep3_item1: slkRscText
{
	idc = 1017;
	text = "Item 1"; //--- ToDo: Localize;
	x = 0.628915 * safezoneW + safezoneX;
	y = 0.676 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep3_item2: slkRscText
{
	idc = 1018;
	text = "Item 2"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.698 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep3_item3: slkRscText
{
	idc = 1019;
	text = "Item 3"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.7178 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep3_item4: slkRscText
{
	idc = 1020;
	text = "Item 4"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.7398 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_dep3_item5: slkRscText
{
	idc = 1021;
	text = "Item 5"; //--- ToDo: Localize;
	x = 0.628916 * safezoneW + safezoneX;
	y = 0.7618 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.011 * safezoneH;
};
class slk_close: slkRscButton
{
	idc = 1617;
	text = "Close Menu"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.8124 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.044 * safezoneH;
	sizeEx = 0.050;
	style = 2;
	colorBackground[] = {0.047,0.376,0.776,1};
	OnButtonClick = "((ctrlParent (_this select 0)) closeDisplay 7777)";
};
class eslk_bgl2: slkIGUIBack
{
	idc = 2202;

	x = 0.213312 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.190781 * safezoneW;
	h = 0.011 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl3: slkIGUIBack
{
	idc = 2203;

	x = 0.399969 * safezoneW + safezoneX;
	y = 0.2294 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.66 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl5: slkIGUIBack
{
	idc = 2204;

	x = 0.593844 * safezoneW + safezoneX;
	y = 0.4318 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.011 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl4: slkIGUIBack
{
	idc = 2205;

	x = 0.589719 * safezoneW + safezoneX;
	y = 0.2294 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.66 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl6: slkIGUIBack
{
	idc = 2206;

	x = 0.593844 * safezoneW + safezoneX;
	y = 0.61 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.011 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl7: slkIGUIBack
{
	idc = 2203;

	x = 0.212281 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.66 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl8: slkIGUIBack
{
	idc = 2205;

	x = 0.778437 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.66 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl9: slkIGUIBack
{
	idc = 2206;

	x = 0.212281 * safezoneW + safezoneX;
	y = 0.8674 * safezoneH + safezoneY;
	w = 0.5775 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
	};
};
