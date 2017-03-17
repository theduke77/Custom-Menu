class rules
{
    idd = 7778;
    movingenable=false;
	class Controls
	{ 
class eslk_frame: slkRscFrame
{
	idc = 1801;

	x = 0.215375 * safezoneW + safezoneX;
	y = 0.1304 * safezoneH + safezoneY;
	w = 0.567187 * safezoneW;
	h = 0.748 * safezoneH;
};
class slk_bgl1: slkIGUIBack
{
	idc = 10000;

	x = 0.210219 * safezoneW + safezoneX;
	y = 0.1172 * safezoneH + safezoneY;
	w = 0.5775 * safezoneW;
	h = 0.088 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class eslk_bgl1: slkIGUIBack
{
	idc = 10000;

	x = 0.210219 * safezoneW + safezoneX;
	y = 0.1172 * safezoneH + safezoneY;
	w = 0.5775 * safezoneW;
	h = 0.77 * safezoneH;
	colorBackground[] = {0,0,0,0.8};
};
class eslk_rules: slkRscText
{
	idc = 1105;
	text = "Server Rules"; //--- ToDo: Localize;
	x = 0.457719 * safezoneW + safezoneX;
	y = 0.1304 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.055 * safezoneH;
	sizeEx = 0.050;
	style = 2;
};
class slk_title1: slkRscText
{
	idc = 1001;

	text = ""; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.2514 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0.882,0.02,0.176,1};
};
class slk_rules1: slkRscStructuredText
{
	idc = 1100;

	text = ""; //--- ToDo: Localize;
	x = 0.226718 * safezoneW + safezoneX;
	y = 0.2778 * safezoneH + safezoneY;
	w = 0.546562 * safezoneW;
	h = 0.066 * safezoneH;
};
class slk_title2: slkRscText
{
	idc = 1002;

	text = ""; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.3614 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0.882,0.02,0.176,1};
};
class slk_rules2: slkRscStructuredText
{
	idc = 1101;
	text = ""; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.3878 * safezoneH + safezoneY;
	w = 0.546562 * safezoneW;
	h = 0.066 * safezoneH;
};
class slk_title3: slkRscText
{
	idc = 1003;

	text = ""; //--- ToDo: Localize;
	x = 0.22775 * safezoneW + safezoneX;
	y = 0.4714 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0.882,0.02,0.176,1};
};
class slk_rules3: slkRscStructuredText
{
	idc = 1102;

	text = ""; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.4978 * safezoneH + safezoneY;
	w = 0.546562 * safezoneW;
	h = 0.066 * safezoneH;
};
class slk_title4: slkRscText
{
	idc = 1004;

	text = ""; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.5792 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0.882,0.02,0.176,1};
};
class slk_rules4: slkRscStructuredText
{
	idc = 1103;
	text = ""; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.6078 * safezoneH + safezoneY;
	w = 0.546562 * safezoneW;
	h = 0.066 * safezoneH;
};
class slk_title5: slkRscText
{
	idc = 1005;

	text = ""; //--- ToDo: Localize;
	x = 0.225688 * safezoneW + safezoneX;
	y = 0.6892 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0.882,0.02,0.176,1};
};
class slk_rules5: slkRscStructuredText
{
	idc = 1104;
	text = ""; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.7156 * safezoneH + safezoneY;
	w = 0.546562 * safezoneW;
	h = 0.066 * safezoneH;
};
class slk_next: slkRscButton
{
	idc = 1600;
	text = "Next Page"; //--- ToDo: Localize;
	x = 0.503082 * safezoneW + safezoneX;
	y = 0.8102 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.044 * safezoneH;
	sizeEx = 0.050;
	style = 2;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call nextscript;";
};
/*
class slk_previous: slkRscButton
{
	idc = 1602;
	text = "Previous Page"; //--- ToDo: Localize;
	x = 0.396862 * safezoneW + safezoneX;
	y = 0.8102 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.044 * safezoneH;
	sizeEx = 0.050;
	style = 2;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "call previousscript;";
};
*/
class slk_return: slkRscButton
{
	idc = 1601;
	text = "Return to Menu"; //--- ToDo: Localize;
	x = 0.226719 * safezoneW + safezoneX;
	y = 0.808 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.044 * safezoneH;
	sizeEx = 0.050;
	style = 2;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 7778); ExecVM 'custom\menu\menu_init.sqf';";
};
class slk_close_menu: slkRscButton
{
	idc = 1603;
	text = "Close Menu"; //--- ToDo: Localize;
	x = 0.685615 * safezoneW + safezoneX;
	y = 0.8102 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.044 * safezoneH;
	sizeEx = 0.050;
	style = 2;
	colorBackground[] = {0.047,0.376,0.776,1};
	onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 7778);";
};
};
};
