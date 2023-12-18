#ifndef GUI_MAIN_H
#define GUI_MAIN_H

#include"Graph.h"
#include<easyx.h>
#include<graphics.h>
#include<conio.h>
#include<string>
using namespace std;


void window_login();
void init_window_login();

void window_main();
void init_window_main();

void window_data_input();
void init_window_data_input();

void window_sln_generate();
void init_window_sln_generate();

void window_display();
void init_window_display();

void window_search();
void init_window_search();

void drawAlpha(int  picture_x, int picture_y, IMAGE* picture);

int check_string(string str_1, string str_2, int length);
int string_length(string str);

#endif //GUI_MAIN_H