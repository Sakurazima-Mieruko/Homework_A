#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <graphics.h>
#include <stdlib.h>
#include<easyx.h>
#include"GUI_main.h"

void search_()
{
	char s[50];
	InputBox(s, 50, "请输入账单时间");
}

void main_interface()
{
	MOUSEMSG m;
	initgraph(500, 450);
	setbkcolor(WHITE);
	cleardevice();
	//loadimage(&img, _T("./Resource/help-blue-button.png"));
	//drawAlpha(29, 93, &img);
	//setfillcolor(WHITE);
	//fillrectangle(395, 0, 805, 750);
	//setfillcolor(LIGHTBLUE);

	//设置文字
	settextcolor(BLACK);//颜色
	settextstyle(24, 0, "黑体");//大小和字体
	setbkmode(TRANSPARENT);// 去掉文字背景

	IMAGE b11, b12;
	loadimage(&b11, _T("./Resource/Button_1_1.png"));
	loadimage(&b12, _T("./Resource/Button_1_2.png"));
	drawAlpha(115, 80, &b11);
	outtextxy(140, 190, "单击此处查询路线");

	IMAGE b21,b22;
	loadimage(&b21, _T("./Resource/Button_2_1.png"));
	loadimage(&b22, _T("./Resource/Button_2_2.png"));
	drawAlpha(115, 200, &b21);
	outtextxy(140, 310, "单击此处查看帮助");

	


	
	//fillrectangle(400, 100, 800, 200);
	//settextstyle(50, 0, "楷体");//设置文字格式
	//int tw = textwidth("信息添加");//获取字符串宽度
	//int th = textheight("信息填加");//获取字符串高度
	//settextcolor(WHITE);
	//outtextxy(400 + (400 - tw) / 2, 100 + (100 - th) / 2, "信息添加");

	//fillrectangle(400, 233, 800, 333);
	//int tw1 = textwidth("信息查询");//获取字符串宽度
	//int th1 = textheight("信息查询");//获取字符串高度
	//outtextxy(400 + (400 - tw1) / 2, 233 + (100 - th1) / 2, "信息查询");

	//fillrectangle(400, 366, 800, 466);
	//int tw2 = textwidth("算账");//获取字符串宽度
	//int th2 = textheight("算账");//获取字符串高度
	//outtextxy(400 + (400 - tw2) / 2, 366 + (100 - th2) / 2, "算账");

	//fillrectangle(400, 500, 800, 600);
	//int tw3 = textwidth("返回");//获取字符串宽度
	//int th3 = textheight("返回");//获取字符串高度
	//outtextxy(400 + (400 - tw3) / 2, 500 + (100 - th3) / 2, "返回");

	//fillrectangle(400, 633, 800, 733);
	//int tw4 = textwidth("帮助");//获取字符串宽度
	//int th4 = textheight("帮助");//获取字符串高度
	//outtextxy(400 + (400 - tw4) / 2, 633 + (100 - th4) / 2, "帮助");

	while (1)
	{
		m = GetMouseMsg();
		if (m.x >= 120 && m.x <= 370 && m.y >= 175 && m.y <= 225)
		{
			drawAlpha(115, 80, &b11);
			outtextxy(140, 190, "单击此处查询路线");
			if (m.uMsg == WM_LBUTTONDOWN)
			{

				return;
			}
		}
		else
		{
			drawAlpha(115, 80, &b12);
			outtextxy(140, 190, "单击此处查询路线");
		}

		if (m.x >= 120 && m.x <= 370 && m.y >= 55 && m.y <= 105)
		{
			drawAlpha(115, 200, &b21);
			outtextxy(140, 310, "单击此处查看帮助");
			if (m.uMsg == WM_LBUTTONDOWN)
			{

				return;
			}
		}
		else
		{
			drawAlpha(115, 200, &b22);
			outtextxy(140, 310, "单击此处查看帮助");
		}
		
	}
	closegraph();
}
