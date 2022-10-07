#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    int col,row,puzzle[4][4],i;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col,row};
    SetConsoleCursorPosition(h,position);
}
