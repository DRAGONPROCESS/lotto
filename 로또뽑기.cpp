#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

#define LOTTO_MAX 10

void RemoveCursorPoint(void)
{
 CONSOLE_CURSOR_INFO curInfo; 
 GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&curInfo); 
 curInfo.bVisible = 0;
 SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&curInfo);
}

int lotto(){
    int loto;
    cout << LOTTO_MAX << "이하의 숫자를 입력하세요: ";
    cin >> loto;
    if(loto>LOTTO_MAX) return 0;
    int random = rand()%LOTTO_MAX;
    if(random == loto){
       cout << "당첨!";
       Sleep(3000);
   }
    else{
    cout << "실패ㅠㅠ\n다음에 또 이용해주세요";
    Sleep(3000);
}
}

int main(){
    SetConsoleTitle("로또뽑기"); 
    RemoveCursorPoint();
    bool On;
    int i,j,x,y,num,cnt=0,px,py;
    char ascii;
    cout << "맵의 x와y값을 입력해주세요(맵크기는 10이상):";
    cin >> x >> y;
    if(x<10||y<10) return 0;
    string map[y][x];
    for(j=0;j<y;j++){
    for(i=0;i<x;i++){
        map[j][i]="□";
    }
    }
    map[y/2][x/2]="★";
    px = x/2;
    py = y/2;
    while(1){
    for(i=0;i<10;i++){
            int ran1 = rand()%y;
            int ran2 = rand()%x;
            if(cnt<10){
    if(map[ran1][ran2]=="□"){
            cnt++;
            map[ran1][ran2]="■";
            }
        }
    }
    system("cls");
    for(j=0;j<y;j++){
    for(i=0;i<x;i++){
        cout << map[j][i];
    }
    cout << endl;
    }
    
    ascii=getch();
    if(ascii==97&&px!=0&&map[py][px-1]=="□"){
        map[py][px]="□";
        map[py][px-1]="★";
        px--;
        On=false;
    }
    else if(ascii==100&&px!=x-1&&map[py][px+1]=="□"){
        map[py][px]="□";
        map[py][px+1]="★";
        px++;
        On=false;
    }
    else if(ascii==119&&py!=0&&map[py-1][px]=="□"){
        map[py][px]="□";
        map[py-1][px]="★";
        py--;
        On=false;
    }
    else if(ascii==115&&py!=y-1&&map[py+1][px]=="□"){
        map[py][px]="□";
        map[py+1][px]="★";
        py++;
        On=false;
    }
    else if(ascii==97&&px!=0&&map[py][px-1]=="■"){
        map[py][px]="□";
        map[py][px-1]="★";
        px--;
        cnt--;
        On=true;
    }
    else if(ascii==100&&px!=x-1&&map[py][px+1]=="■"){
        map[py][px]="□";
        map[py][px+1]="★";
        px++;
        cnt--;
        On=true;
    }
    else if(ascii==119&&py!=0&&map[py-1][px]=="■"){
        map[py][px]="□";
        map[py-1][px]="★";
        py--;
        cnt--;
        On=true;
    }
    else if(ascii==115&&py!=y-1&&map[py+1][px]=="■"){
        map[py][px]="□";
        map[py+1][px]="★";
        py++;
        cnt--;
        On=true;
    }
    else if(ascii==97&&px!=0&&map[py][px-1]=="□"){
        map[py][px]="□";
        map[py][px-1]="★";
        px--;
        On=false;
    }
    else if(ascii==100&&px!=x-1&&map[py][px+1]=="□"){
        map[py][px]="□";
        map[py][px+1]="★";
        px++;
        On=false;
    }
    else if(ascii==119&&py!=0&&map[py-1][px]=="□"){
        map[py][px]="□";
        map[py-1][px]="★";
        py--;
        On=false;
    }
    else if(ascii==115&&py!=y-1&&map[py+1][px]=="□"){
        map[py][px]="□";
        map[py+1][px]="★";
        py++;
        On=false;
    }
    else if(ascii==32&&On==true){
    lotto();
    }
}
}
