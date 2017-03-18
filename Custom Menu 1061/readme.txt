
Hi Epoch community,
Have you ever wanted a way for players to be able to see your server rules while in-game?
Are you tired of repeating yourself with simple answers to simple questions?
Looking for a different way to deploy items or call certain scripts?

Our community uses mostly scripts from this awesome epoch community. Its our time to give back :)
I've decided to make a release version of my GUI for everyone to use.

I've received tremendous help from SHIX. Most of the credit goes to him for explaining to me how to do this.
also, I've used the code he provided as a template and built this from that.
He kindly allowed me to share with all of you

Ok, now for the fun part.
This is NOT for someone new to the world of epoch server management. (probly because of my instructions lol)
This is NOT a plug-n-play addon. You must configure all the files and customize the menu
I would strongly suggest you have a test server to be able to test it as you create new pages.
Try one page to make sure it looks good, then go from there.
If you want to change the colors of stuff, check out the options section before creating pages.

I will do my best to explain to the best of my knowledge.
I'm far from being a coder lol

Tools required

Notepad ++
PBO Tool
patience...with my instructions ;)
TextView (optional)


***************************

Installation:

Extract your mission.pbo
Copy the menu folder from the download into your custom folder. If you don't have a custom folder create one.

open description.ext

add this at the bottom
Its important that the defines is at the top!!


#include"custom\menu\defines.hpp"
#include"custom\menu\menu.hpp"
#include"custom\menu\rules.hpp"
#include"custom\menu\rules2.hpp"
save and close

Open your custom compiles and look for


DZ_KeyDown_EH = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\keyboard.sqf";
Replace that line with


DZ_KeyDown_EH = compile preprocessFileLineNumbers "custom\menu\keyboard.sqf";
Save and close

For players using Infistore, you will need to add the dialog numbers, 7777,7778,7779

7777 - menu.hpp
7778 - rules.hpp
7779 - rules2.hpp

Extract your dayz_server.pbo

Open your AHConfig.sqf
look for

_ALLOWED_Dialogs

add the dialogs. EX: ...9900,7777,7778,7779)  If you created 4 extra pages, you will need to add all those dialog numbers. (will explain a bit more later)

Now that the files are in place, its time to configure them.
First, make yourself a drink and get ready :)

Open menu_init.sqf. If you read the comments for each section it explains what you need to know
Here you can set the call lines or scripts for your actions, and deployables.

Second, open rules_init.sqf
In this file, the comments explain what you need to know.
I've included a couple files as templates to help you get started.


**********************
How to create new pages
**********************

Copy and paste  rules2_init.sqf and rules2.hpp.  Rename them rules3_init.sqf and rules3.hpp

Open your rules3.hpp

Things to pay attention to when creating a new page are Highlighted in bold

- The display name
At the very top, in this case its "rules2". Change it to rules3.


class rules2
{
    idd = 7779;
    movingenable=false;
    class Controls
    { 
- The Dialog number, also at the very top
For each new page you create, you will need to change the dialog number and increase its number by 1

change
 


class rules2
{
    idd = 7779;
    movingenable=false;
	class Controls
	{ 
to
 


class rules3
{
    idd = 7780;
    movingenable=false;
	class Controls
	{ 
- The NEXT and PREVIOUS buttons
For this scenario, we will work as if page 3 is our last page for our "rules" section. Do a search for "previous", without the quotes. you should fine this block of code

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
    onButtonClick = "call previous2script;";
};

Highlighted in black is the call from line 21 from rules2_init.sqf (will get to that just bellow).  As we are creating a new page, we will need to change it.

onButtonClick = "call previous3script;";

In rules3_init.sqf, line 21 changes from
previous2script = {((ctrlParent (_this select 0)) closeDisplay 7779); execvm 'custom\menu\YOUR_SCRIPT.sqf';}; //script that Previous button will use 

to

previous3script = {((ctrlParent (_this select 0)) closeDisplay 7780); execvm 'custom\menu\rules2_init.sqf';}; //script that Previous button will use 

pay attention to the dialog number and execvm line. our new dialog number has become 7780, so the call line must know which dialog to close when the button is pressed.
As this is a previous button, you want the execvm to call the rules2_init.sqf

For the next button, you would do the opposite. but in this example we don't need the next button because its our last page.
To remove the button from the page, you need to comment out the block of code. In bold is what you need to add to comment out the code.
 this /* opens the comment block
 this */ close the comment block

/*
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
    onButtonClick = "call next2script;";
};
*/

- The CLOSE MENU and RETURN buttons.

In each new page you create, you will need to find these 2 buttons in the *.hpp you created, just like the next and previous buttons.
Block of code looks like this

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
    onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 7779); ExecVM 'custom\menu\menu_init.sqf';";
};

The only thing you need to pay attention to in this line is the dialog number.  So in this case our new page dialog number is 7780, we change it to this

onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 7780); ExecVM 'custom\menu\menu_init.sqf';";

Do the same for the CLOSE MENU button

Alright so now you've created a new page. Open the rules3_init.sqf and configure the rules as needed.

In each new "rules_init.sqf" you will create, you will need to change the display name
Around line 25 you will see some something like this

createDialog "rules2";

change it to 

createDialog "rules3";

For each new page you've created, you will need to add the dialog number to the infistore list (explained above)
For each new page you've created, you need to add only the HPP file to the bottom of your description.ext (#include "custom\menu\rules3.hpp")

And thats it for the install and configuration of the menu. Time for another drink ;)


*****************
OPTIONAL
*****************

- Adding a logo to the top left of the menu

Open the menu.hpp

Look for this block of code

class slk_picl: slkRscPicture
{
    idc = 1200;
    text = "custom\menu\logo.paa";
    x = 0.221562 * safezoneW + safezoneX;
    y = 0.137 * safezoneH + safezoneY;
    w = 0.128906 * safezoneW;
    h = 0.077 * safezoneH;
};

The highlighted line is the path to your logo. I just used my watermark logo. It needs to be in paa format.
create a PNG and import it into TextView made by bohemia. Save it as a PAA file.

I've also included a sample logo to use as a template.
If you don't want to use the logo, just comment out the block of code.

- Changing the colors of buttons and text
I would STRONGLY SUGGEST doing this before making a bunch of pages.

Visit this page to choose the colour you want
http://html-color-codes.info/

Visit this page to copy the HTML code into Kill Zone kids amazing converter for arma
http://killzonekid.com/hex-2-arma-gui-colour-converter/

Open menu.hpp
look for 

colorBackground[] = {0.047,0.376,0.776,1};

that is the line of code you need to change for the background color of the button.  Do the same thing for the pages

As for the text, you will need to go in each block in each page and add the color you choose.
each block will have slk_rules1 or slk_rules2 and so on...
Example:


class slk_rules1: slkRscStructuredText
{
	idc = 1100;

	text = ""; //--- ToDo: Localize;
	x = 0.226718 * safezoneW + safezoneX;
	y = 0.2778 * safezoneH + safezoneY;
	w = 0.546562 * safezoneW;
	h = 0.066 * safezoneH;
};
add your colour like so

class slk_rules1: slkRscStructuredText
{
    idc = 1100;

    text = ""; //--- ToDo: Localize;
    x = 0.226718 * safezoneW + safezoneX;
    y = 0.2778 * safezoneH + safezoneY;
    w = 0.546562 * safezoneW;
    h = 0.066 * safezoneH;
    colorText[] = {1,1,1,1}; //White
};

*****************
Known issues
*****************

If you hit the menu button twice, it seems to overlap the menu. Havnt figured that out yet

Players with smaller resolutions, the text can be cut out. This is due the the arma GUI resolution. In your arma 2 video settings, there is a option for the interface size. I have mine set to small. 
If someone knows how i can fix the first issue please let me know :)


******************************

Many thanks to SHIX. Without him explaining this GUI stuff to me I wouldn't of made it lol
Thanks to Kill Zone kids blogs, they are amazing to learn from.
 
Thanks casual_jeff for the 1061 fix

Added keyboard.sqf for less confusion.  Thanks RC_Robio

Hope you guys enjoy it.
I will support this to the best of my knowledge :)