/////////////// Common Properties for controls ///////////////
/*
	{
		idc = _1;
		moving = 0;
		
		type = CT_STATIC;
		style = ST_CENTER;
		
		x = 0;
		y = 0;
		w = 1;
		h = 1;
		
		colorBackground = 	{0.0,   0.0,   0.0,   0.3};
	
		sizeEx = 0.05;						/// Font Size, sometimes just "size"
		font = GUI_FONT_NORMAL;
		colorText[] = 		{0.90,  0.90,  0.90,  0.90};			/// RGBA
		text = "string of the text";
		shadow = 1; 						/// 1 = drop shadow soft edges; 2 = Stroke
	
		tooltip = ""; 						/// linebreak possible with \n
		tooltipColorShade =	{0.90,  0.90,  0.90,  0.90};			/// tooltip Background
		toolTipColorText = {1,1,1,1};
		tootlTipColorBox = {1,1,1,1}; 								/// Border color
	
		autocomplete = "";
	
		url = "";
		overlayMode = 0;
	};
*/


/////////////// DEFINES ///////////////

#define COLOR_HALF_BLACK { 0, 0, 0, 0.5 }


/////////////// imports ///////////////

import RscText;
import RscLine;
import RscFrame;
import RscPicture;
import RscPictureKeepAspect;
import RscVideo;
import RscMapControl;
import RscListBox;
import RscButtonMenuOK;
import RscButtonMenuCancel;


/////////////// PARENTS / TEMPLATES ///////////////


class RscBG : RscText 
{
	idc = _1;
	access = 0;

	type = CT_STATIC;
	style = ST_BACKGROUND;

	text = "Text";
	colorText[] = {0,0,0,0};
	font = GUI_FONT_NORMAL;
	sizeEX = 0.05;

	x = 0;
	y = 0;
	h = 1;
	w = 1;
	colorBackground[] = { 0.412, 0, 0, 1};
};



/////////////// DISPLAYS ///////////////

/////////////// Playground

class cvo_display_test_1
{
	idd = 1000 + 1;
	access = 0;
	movingEnable = 1;
	onLoad = "systemChat str _this";
	onUnload  = "systemChat str _this";
	enableSimulation = true;


	class ControlsBackground
	{
		class cvo_display_bg: RscText
		{
			idc = 1001;

			type = CT_STATIC;
			style = ST_BACKGROUND;

			font = GUI_FONT_NORMAL;
			sizeEX = 0.05;



			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 25 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.8};
		};

		class cvo_display_title: RscText
			{
				idc = 1002;
				text = "CVO Deployment Screen"; //___ ToDo: Localize;
				x = 0.5 * GUI_GRID_W + GUI_GRID_X;
				y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 39 * GUI_GRID_W;
				h = 1.5 * GUI_GRID_H;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.412,0,0,1};
			};
	};

	class Controls 
	{

		class cvo_deploy_ok: RscButtonMenuOK
		{
			x = 30 * GUI_GRID_W + GUI_GRID_X;
			y = 24 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class cvo_deploy_cancel: RscButtonMenuCancel
		{
			x = 23.5 * GUI_GRID_W + GUI_GRID_X;
			y = 24 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};


	};
	class Objects
	{
		//Objects
	};
};