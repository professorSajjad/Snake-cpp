#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED
#include "ChessBoard.h"
#include <conio.h>

class Snake:public ChessBoard{
public:
    int zb[2][100];
    long start;
    int head,tail,grade,score,gamespeed,length,timeover,x,y;
    char direction;
    Snake();
    void move();
 };
 
 #endif
