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
	InputBox(s, 50, "�������˵�ʱ��");
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

	//��������
	settextcolor(BLACK);//��ɫ
	settextstyle(24, 0, "����");//��С������
	setbkmode(TRANSPARENT);// ȥ�����ֱ���

	IMAGE b11, b12;
	loadimage(&b11, _T("./Resource/Button_1_1.png"));
	loadimage(&b12, _T("./Resource/Button_1_2.png"));
	drawAlpha(115, 80, &b11);
	outtextxy(140, 190, "�����˴���ѯ·��");

	IMAGE b21,b22;
	loadimage(&b21, _T("./Resource/Button_2_1.png"));
	loadimage(&b22, _T("./Resource/Button_2_2.png"));
	drawAlpha(115, 200, &b21);
	outtextxy(140, 310, "�����˴��鿴����");

	


	
	//fillrectangle(400, 100, 800, 200);
	//settextstyle(50, 0, "����");//�������ָ�ʽ
	//int tw = textwidth("��Ϣ���");//��ȡ�ַ������
	//int th = textheight("��Ϣ���");//��ȡ�ַ����߶�
	//settextcolor(WHITE);
	//outtextxy(400 + (400 - tw) / 2, 100 + (100 - th) / 2, "��Ϣ���");

	//fillrectangle(400, 233, 800, 333);
	//int tw1 = textwidth("��Ϣ��ѯ");//��ȡ�ַ������
	//int th1 = textheight("��Ϣ��ѯ");//��ȡ�ַ����߶�
	//outtextxy(400 + (400 - tw1) / 2, 233 + (100 - th1) / 2, "��Ϣ��ѯ");

	//fillrectangle(400, 366, 800, 466);
	//int tw2 = textwidth("����");//��ȡ�ַ������
	//int th2 = textheight("����");//��ȡ�ַ����߶�
	//outtextxy(400 + (400 - tw2) / 2, 366 + (100 - th2) / 2, "����");

	//fillrectangle(400, 500, 800, 600);
	//int tw3 = textwidth("����");//��ȡ�ַ������
	//int th3 = textheight("����");//��ȡ�ַ����߶�
	//outtextxy(400 + (400 - tw3) / 2, 500 + (100 - th3) / 2, "����");

	//fillrectangle(400, 633, 800, 733);
	//int tw4 = textwidth("����");//��ȡ�ַ������
	//int th4 = textheight("����");//��ȡ�ַ����߶�
	//outtextxy(400 + (400 - tw4) / 2, 633 + (100 - th4) / 2, "����");

	while (1)
	{
		m = GetMouseMsg();
		if (m.x >= 120 && m.x <= 370 && m.y >= 175 && m.y <= 225)
		{
			drawAlpha(115, 80, &b11);
			outtextxy(140, 190, "�����˴���ѯ·��");
			if (m.uMsg == WM_LBUTTONDOWN)
			{

				return;
			}
		}
		else
		{
			drawAlpha(115, 80, &b12);
			outtextxy(140, 190, "�����˴���ѯ·��");
		}

		if (m.x >= 120 && m.x <= 370 && m.y >= 55 && m.y <= 105)
		{
			drawAlpha(115, 200, &b21);
			outtextxy(140, 310, "�����˴��鿴����");
			if (m.uMsg == WM_LBUTTONDOWN)
			{

				return;
			}
		}
		else
		{
			drawAlpha(115, 200, &b22);
			outtextxy(140, 310, "�����˴��鿴����");
		}
		
	}
	closegraph();
}
