#ifndef CHESSBOARD_H_INCLUDED
#define CHESSBOARD_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <time.h>

#define H 22
#define W 22

using namespace std;

class ChessBoard {
	
	public:
	    char qp[H][W];
	    int i,j,x1,y1;
	    ChessBoard();
	    void food();
	    void prt(int grade,int score,int gamespeed);
	    
};

#endif
