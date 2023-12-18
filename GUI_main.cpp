#include"GUI_main.h"
using namespace std;

void window_login() {

	init_window_login();

	while (1) {
		MOUSEMSG msg = GetMouseMsg();
		int index = 0;
		//Button_Login index=1
		if (msg.x > 170 && msg.x < 370 && msg.y > 80 && msg.y < 130) {

			IMAGE Button1_2_1;
			loadimage(&Button1_2_1, _T("./Resource/Button_1_2.png"), 200, 200);
			drawAlpha(170, 10, &Button1_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("微软雅黑"), 0, 0, 3, false, false, false);
			outtextxy(230, 83, _T("Login"));

			index = 1;
		}
		else {

			IMAGE Button1_2_1;
			loadimage(&Button1_2_1, _T("./Resource/Button_1_1.png"), 200, 200);
			drawAlpha(170, 10, &Button1_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("微软雅黑"), 0, 0, 3, false, false, false);
			outtextxy(230, 83, _T("Login"));
		}
		//Button_Register index=2
		if (msg.x > 170 && msg.x < 370 && msg.y > 180 && msg.y < 230) {

			IMAGE Button1_2_2;
			loadimage(&Button1_2_2, _T("./Resource/Button_1_2.png"), 200, 200);
			drawAlpha(170, 100, &Button1_2_2);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("微软雅黑"), 0, 0, 3, false, false, false);
			outtextxy(210, 175, _T("Register"));

			index = 2;
		}
		else {

			IMAGE Button1_2_2;
			loadimage(&Button1_2_2, _T("./Resource/Button_1_1.png"), 200, 200);
			drawAlpha(170, 100, &Button1_2_2);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("微软雅黑"), 0, 0, 3, false, false, false);
			outtextxy(210, 175, _T("Register"));
		}

		//根据index触发事件
		if (msg.uMsg == WM_LBUTTONDOWN) {
			char ID[80];
			char password[80];
			char temp[80];

			if (index == 1) {
				InputBox(ID, 80, _T("账户名："));
				printf("%s\n", ID);
				InputBox(password, 80, _T("密码："));
				printf("%s\n", password);
				closegraph();
				window_main();
				break;
			}
			else if (index == 2) {
				InputBox(ID, 80, _T("账户名："));
				printf("%s\n", ID);
				InputBox(password, 80, _T("密码："));
				printf("%s\n", password);

				InputBox(temp, 80, _T("确认密码："));
				while (!check_string(temp, password, min(string_length(temp), string_length(password)))) {
					InputBox(password, 80, _T("密码不匹配，重新输入："));
					InputBox(temp, 80, _T("确认密码："));
				}
				closegraph();
				window_main();
				break;
			}
			else if (index == 3) {
				closegraph();
				break;
			}
		}


	}

	system("pause");
}

void init_window_login() {

	initgraph(540, 360, EX_SHOWCONSOLE);
	setbkmode(TRANSPARENT);
	cleardevice();

	IMAGE img;
	loadimage(&img, _T("./Resource/login_background.jpg"), 540, 360);
	putimage(0, 0, &img);

	IMAGE Button1_1_1;
	loadimage(&Button1_1_1, _T("./Resource/Button_1_1.png"), 200, 200);
	drawAlpha(170, 10, &Button1_1_1);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("微软雅黑"), 0, 0, 3, false, false, false);
	outtextxy(230, 83, _T("Login"));

	IMAGE Button1_1_2;
	loadimage(&Button1_1_2, _T("./Resource/Button_1_1.png"), 200, 200);
	drawAlpha(170, 100, &Button1_1_2);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("微软雅黑"), 0, 0, 3, false, false, false);
	outtextxy(210, 175, _T("Register"));
}

void window_main() {
	init_window_main();

	while (1) {
		MOUSEMSG msg = GetMouseMsg();
		int index = 0;
		//Button_main index=1
		if (msg.x > 20 && msg.x < 220 && msg.y > 220 && msg.y < 270) {

			IMAGE Button_2_2_1;
			loadimage(&Button_2_2_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(20, 150, &Button_2_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 225, _T("数据输入"));

			index = 1;
		}
		else {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(20, 150, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 225, _T("数据输入"));
		}
		//Button_main index=2
		if (msg.x > 20 && msg.x < 220 && msg.y > 320 && msg.y < 370) {

			IMAGE Button_2_2_1;
			loadimage(&Button_2_2_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(20, 250, &Button_2_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 325, _T("生成方案"));

			index = 2;
		}
		else {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(20, 250, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 325, _T("生成方案"));
		}
		//Button_main index=3
		if (msg.x > 20 && msg.x < 220 && msg.y > 420 && msg.y < 470) {

			IMAGE Button_2_2_1;
			loadimage(&Button_2_2_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(20, 350, &Button_2_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 425, _T("数据概览"));

			index = 3;
		}
		else {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(20, 350, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 425, _T("数据概览"));
		}
		//Button_main index=4
		if (msg.x > 20 && msg.x < 220 && msg.y > 520 && msg.y < 570) {

			IMAGE Button_2_2_1;
			loadimage(&Button_2_2_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(20, 450, &Button_2_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 525, _T("信息查询"));

			index = 4;
		}
		else {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(20, 450, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 525, _T("信息查询"));
		}

		//根据index触发事件
		if (msg.uMsg == WM_LBUTTONDOWN) {
			char ID[80];
			char password[80];
			char temp[80];

			if (index == 1) {
				window_data_input();
				break;
			}
			else if (index == 2) {
				window_sln_generate();
				break;
			}
			else if (index == 3) {
				window_display();
				break;
			}
			else if (index == 4) {
				window_search();
				break;
			}
		}


	}

	system("pause");
}


void init_window_main() {

	initgraph(600, 750, EX_SHOWCONSOLE);
	setbkmode(TRANSPARENT);
	cleardevice();

	IMAGE img;
	loadimage(&img, _T("./Resource/main_background.jpg"), 600, 750);
	putimage(0, 0, &img);

	IMAGE logo;
	loadimage(&logo, _T("./Resource/logo.png"), 300, 100);
	drawAlpha(0, 0, &logo);

	IMAGE Button_2_1_1;
	loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(20, 150, &Button_2_1_1);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(60, 225, _T("数据输入"));

	IMAGE Button_2_1_2;
	loadimage(&Button_2_1_2, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(20, 250, &Button_2_1_2);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(60, 325, _T("生成方案"));

	IMAGE Button_2_1_3;
	loadimage(&Button_2_1_3, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(20, 350, &Button_2_1_3);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(60, 425, _T("数据概览"));

	IMAGE Button_2_1_4;
	loadimage(&Button_2_1_4, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(20, 450, &Button_2_1_4);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(60, 525, _T("信息查询"));
}

void window_data_input() {
	init_window_data_input();

	while (1) {
		MOUSEMSG msg = GetMouseMsg();
		int index = 0;
		//Button_main index=1
		if (msg.x > 20 && msg.x < 220 && msg.y > 220 && msg.y < 270) {

			IMAGE Button_2_2_1;
			loadimage(&Button_2_2_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(20, 150, &Button_2_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 225, _T("文件输入"));

			index = 1;
		}
		else {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(20, 150, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 225, _T("文件输入"));
		}
		//Button_main index=2
		if (msg.x > 20 && msg.x < 220 && msg.y > 320 && msg.y < 370) {

			IMAGE Button_2_2_1;
			loadimage(&Button_2_2_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(20, 250, &Button_2_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 325, _T("手动输入"));

			index = 2;
		}
		else {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(20, 250, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 325, _T("手动输入"));
		}
		//Button_main index=3
		if (msg.x > 20 && msg.x < 220 && msg.y > 420 && msg.y < 470) {

			IMAGE Button_2_2_1;
			loadimage(&Button_2_2_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(20, 350, &Button_2_2_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 425, _T("随机输入"));

			index = 3;
		}
		else {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(20, 350, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(60, 425, _T("随机输入"));
		}
		if (msg.x > 0 && msg.x < 40 && msg.y > 0 && msg.y < 40) {
			index = -1;
		}


		//根据index触发事件
		if (msg.uMsg == WM_LBUTTONDOWN) {
			char ID[80];
			char password[80];
			char temp[80];

			if (index == 1) {
				printf("文件输入");
			}
			else if (index == 2) {
				printf("手动输入");
			}
			else if (index == 3) {
				printf("随机输入");
			}
			else if (index == -1) {
				window_main();
			}
		}


	}

	system("pause");
}

void init_window_data_input() {

	cleardevice();
	setbkmode(TRANSPARENT);
	cleardevice();

	IMAGE img;
	loadimage(&img, _T("./Resource/main_background.jpg"), 600, 750);
	putimage(0, 0, &img);

	IMAGE logo;
	loadimage(&logo, _T("./Resource/logo.png"), 300, 100);
	drawAlpha(0, 0, &logo);

	IMAGE Button_2_1_1;
	loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(20, 150, &Button_2_1_1);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(60, 225, _T("文件输入"));

	IMAGE Button_2_1_2;
	loadimage(&Button_2_1_2, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(20, 250, &Button_2_1_2);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(60, 325, _T("手动输入"));

	IMAGE Button_2_1_3;
	loadimage(&Button_2_1_3, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(20, 350, &Button_2_1_3);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(60, 425, _T("随机输入"));
}

void window_sln_generate() {
	init_window_sln_generate();

	while (1) {
		MOUSEMSG msg = GetMouseMsg();
		int index = 0;
		//Button_main index=1
		if (msg.x > 0 && msg.x < 200 && msg.y > 75 && msg.y < 120) {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(0, 0, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(40, 75, _T("选择数据"));

			index = 1;
		}
		else {

			IMAGE Button_2_1_2;
			loadimage(&Button_2_1_2, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(0, 0, &Button_2_1_2);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(40, 75, _T("选择数据"));
		}

		if (msg.x > 0 && msg.x < 40 && msg.y > 0 && msg.y < 40) {
			index = -1;
		}

		//根据index触发事件
		if (msg.uMsg == WM_LBUTTONDOWN) {
			char ID[80];

			if (index == 1) {
				printf("选择数据");
			}
			 if (index == -1) {
				window_main();
			}
		}


	}

	system("pause");
}

void init_window_sln_generate() {

	initgraph(800, 450, EX_SHOWCONSOLE);
	setbkmode(TRANSPARENT);
	cleardevice();

	IMAGE img;
	loadimage(&img, _T("./Resource/main_background2.jpg"), 800, 450);
	putimage(0, 0, &img);

	IMAGE logo;
	loadimage(&logo, _T("./Resource/logo.png"), 200, 70);
	drawAlpha(0, 0, &logo);

	IMAGE Button_2_1_1;
	loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(0, 0, &Button_2_1_1);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(40, 75, _T("选择数据"));
}

void window_display() {
	init_window_display();

	while (1) {
		MOUSEMSG msg = GetMouseMsg();
		int index = 0;
		//Button_main index=1
		if (msg.x > 0 && msg.x < 200 && msg.y > 75 && msg.y < 120) {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(0, 0, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(40, 75, _T("智能排序"));

			index = 1;
		}
		else {

			IMAGE Button_2_1_2;
			loadimage(&Button_2_1_2, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(0, 0, &Button_2_1_2);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(40, 75, _T("智能排序"));
		}
		if (msg.x > 0 && msg.x < 40 && msg.y > 0 && msg.y < 40) {
			index = -1;
		}

		//根据index触发事件
		if (msg.uMsg == WM_LBUTTONDOWN) {
			char ID[80];

			if (index == 1) {
				printf("智能排序");
			}
			else if (index == -1) {
				window_main();
			}
		}


	}

	system("pause");
}

void init_window_display() {

	initgraph(800, 450, EX_SHOWCONSOLE);
	setbkmode(TRANSPARENT);
	cleardevice();

	IMAGE img;
	loadimage(&img, _T("./Resource/main_background2.jpg"), 800, 450);
	putimage(0, 0, &img);

	IMAGE logo;
	loadimage(&logo, _T("./Resource/logo.png"), 200, 70);
	drawAlpha(0, 0, &logo);

	IMAGE Button_2_1_1;
	loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(0, 0, &Button_2_1_1);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(40, 75, _T("智能排序"));
}

void window_search() {
	init_window_search();

	while (1) {
		MOUSEMSG msg = GetMouseMsg();
		int index = 0;
		//Button_main index=1
		if (msg.x > 0 && msg.x < 200 && msg.y > 75 && msg.y < 120) {

			IMAGE Button_2_1_1;
			loadimage(&Button_2_1_1, _T("./Resource/Button_2_2.png"), 200, 200);
			drawAlpha(0, 0, &Button_2_1_1);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(40, 75, _T("智能查询"));

			index = 1;
		}
		else {

			IMAGE Button_2_1_2;
			loadimage(&Button_2_1_2, _T("./Resource/Button_2_1.png"), 200, 200);
			drawAlpha(0, 0, &Button_2_1_2);

			settextcolor(BLACK);
			settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
			outtextxy(40, 75, _T("智能查询"));
		}
		if (msg.x > 0 && msg.x < 40 && msg.y > 0 && msg.y < 40) {
			index = -1;
		}
		

		//根据index触发事件
		if (msg.uMsg == WM_LBUTTONDOWN) {
			char ID[80];

			if (index == 1) {
				printf("智能查询");
			}
			else if (index == -1) {
				window_main();
			}
		}


	}

	system("pause");
}

void init_window_search() {

	initgraph(800, 450, EX_SHOWCONSOLE);
	setbkmode(TRANSPARENT);
	cleardevice();

	IMAGE img;
	loadimage(&img, _T("./Resource/main_background2.jpg"), 800, 450);
	putimage(0, 0, &img);

	IMAGE logo;
	loadimage(&logo, _T("./Resource/logo.png"), 200, 70);
	drawAlpha(0, 0, &logo);

	IMAGE Button_2_1_1;
	loadimage(&Button_2_1_1, _T("./Resource/Button_2_1.png"), 200, 200);
	drawAlpha(0, 0, &Button_2_1_1);

	settextcolor(BLACK);
	settextstyle(40, 15, _T("黑体"), 0, 0, 3, false, false, false);
	outtextxy(40, 75, _T("智能排序"));
}

int Button(int x, int y, IMAGE pre, IMAGE post) { return 0; }

int check_string(string str_1, string str_2, int length) {
	int flag = 1;
	for (int i = 0; i < length; i++) {
		if (str_1[i] != str_2[i]) {
			flag = 0;
		}
	}
	return flag;
}
int string_length(string str) {
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}
	return length;
}

void drawAlpha(int  picture_x, int picture_y, IMAGE* picture) {  //x为载入图片的X坐标，y为Y坐标
	// 变量初始化
	DWORD* dst = GetImageBuffer();    // GetImageBuffer()函数，用于获取绘图设备的显存指针，EASYX自带
	DWORD* draw = GetImageBuffer();
	DWORD* src = GetImageBuffer(picture); //获取picture的显存指针
	int picture_width = picture->getwidth(); //获取picture的宽度，EASYX自带
	int picture_height = picture->getheight(); //获取picture的高度，EASYX自带
	int graphWidth = getwidth();       //获取绘图区的宽度，EASYX自带
	int graphHeight = getheight();     //获取绘图区的高度，EASYX自带
	int dstX = 0;    //在显存里像素的角标

	// 实现透明贴图 公式： Cp=αp*FP+(1-αp)*BP ， 贝叶斯定理来进行点颜色的概率计算
	for (int iy = 0; iy < picture_height; iy++)
	{
		for (int ix = 0; ix < picture_width; ix++)
		{
			int srcX = ix + iy * picture_width; //在显存里像素的角标
			int sa = ((src[srcX] & 0xff000000) >> 24); //0xAArrggbb;AA是透明度
			int sr = ((src[srcX] & 0xff0000) >> 16); //获取RGB里的R
			int sg = ((src[srcX] & 0xff00) >> 8);   //G
			int sb = src[srcX] & 0xff;              //B
			if (ix >= 0 && ix <= graphWidth && iy >= 0 && iy <= graphHeight && dstX <= graphWidth * graphHeight)
			{
				dstX = (ix + picture_x) + (iy + picture_y) * graphWidth; //在显存里像素的角标
				int dr = ((dst[dstX] & 0xff0000) >> 16);
				int dg = ((dst[dstX] & 0xff00) >> 8);
				int db = dst[dstX] & 0xff;
				draw[dstX] = ((sr * sa / 255 + dr * (255 - sa) / 255) << 16)  //公式： Cp=αp*FP+(1-αp)*BP  ； αp=sa/255 , FP=sr , BP=dr
					| ((sg * sa / 255 + dg * (255 - sa) / 255) << 8)         //αp=sa/255 , FP=sg , BP=dg
					| (sb * sa / 255 + db * (255 - sa) / 255);              //αp=sa/255 , FP=sb , BP=db
			}
		}
	}
}