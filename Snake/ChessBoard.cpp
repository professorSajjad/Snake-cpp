#include "ChessBoard.h"

ChessBoard::ChessBoard(){
	
    for(i=1;i<=H-2;i++)
        for(j=1;j<=W-2;j++)
            qp[i][j]=' ';
    for(i=0;i<=H-1;i++)
        qp[0][i] = qp[H-1][i] = '#';
    for(i=1;i<=H-2;i++)
        qp[i][0] = qp[i][W-1] = '#';
    food();
    
}
void ChessBoard::prt(int grade,int score,int gamespeed)
{
    system("cls");
    cout << endl;
    for(i=0;i<H;i++)
    {
        cout << "\t";
        for(j=0;j<W;j++)
            cout<<qp[i][j]<<' ';
        if(i==0) cout << "\tGrade:" << grade;
        if(i==2) cout << "\tScore:" << score;
        if(i==4) cout << "\tAutomatic forward";
        if(i==5) cout << "\ttime interval:" << gamespeed << "ms";
        cout<<endl;
    }
}
void ChessBoard::food(){
    srand(time(0));
    do
    {
        x1=rand()%W-2+1;
        y1=rand()%H-2+1;
    }
    while(qp[x1][y1]!=' ');
    qp[x1][y1]='$';
}
