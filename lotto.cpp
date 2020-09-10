#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>
#include <fstream>
using namespace std;

#define ALLYEAR 11

void RemoveCursorPoint(void)
{
 CONSOLE_CURSOR_INFO curInfo; 
 GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&curInfo); 
 curInfo.bVisible = 0;
 SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&curInfo);
}

int maxelement(int arr[]){
	int max = arr[0],i,gmax;
	for(i=0;i<1000;i++){
		if(max<arr[i]){
		max = arr[i];
		gmax = i;
	}
	}
	return gmax;
}

int AllGraph(){
	system("cls");
	int i,str11,str22,str33,str44,str55,str66,bonuss;
	vector<int>str1,str2,str3,str4,str5,str6,bonus;
	int ans1[1000]={0},ans2[1000]={0},ans3[1000]={0},ans4[1000]={0},ans5[1000]={0},ans6[1000]={0},ansb[1000]={0};
	ifstream ifs("data.txt");
	if(ifs.is_open()){
		for(i=0;i<ALLYEAR;i++){
		ifs >> str11 >> str22 >> str33 >> str44 >> str55 >> str66 >> bonuss;
		str1.push_back(str11);
		str2.push_back(str22);
		str3.push_back(str33);
		str4.push_back(str44);
		str5.push_back(str55);
		str6.push_back(str66);
		bonus.push_back(bonuss);
	}
}
	else if(!ifs.is_open()){
		cout << "파일열기에 실패했거나 해당경로에 파일이 존재하지 않습니다.\n";
		return 0;
	}
	ifs.close();
	cout << "파일 분석이 끝났습니다.\n";
	if(str1.size()==str2.size()&&str2.size()==str3.size()&&str3.size()==str4.size()&&str4.size()==str5.size()&&str5.size()==str6.size()&&str6.size()==bonus.size())
	cout << "배열크기가 같음을 확인 완료했습니다.\n";
	Sleep(1000);
	system("cls");
	for(i=0;i<bonus.size();i++){
		ans1[str1.at(i)]++;
		ans2[str2.at(i)]++;
		ans3[str3.at(i)]++;
		ans4[str4.at(i)]++;
		ans5[str5.at(i)]++;
		ans6[str6.at(i)]++;
		ansb[bonus.at(i)]++;
	}
	str11 = maxelement(ans1);
	str22 = maxelement(ans2);
	str33 = maxelement(ans3);
	str44 = maxelement(ans4);
	str55 = maxelement(ans5);
	str66 = maxelement(ans6);
	bonuss = maxelement(ansb);
	cout<<"\n[!]KEY ==>> "<<str11<<" "<<str22<<" "<<str33<<" "<<str44<<" "<<str55<<" "<<str66<<" "<<bonuss;
	cout << "\n\n\n\n[Space Bar] 확인";
	char ascii;
	while(1){
	ascii=getch();
	if(ascii==32) break;
}
}

int Graph(){
	system("cls");
	register int i,str11,str22,str33,str44,str55,str66,bonuss,year,years;
	vector<int>str1,str2,str3,str4,str5,str6,bonus;
	xy:
	cout << "몇회차전부터 조회할까요? : ";
	cin >> year;
	if(year>ALLYEAR) 
	{
	cout << "잘못된 입력입니다.\n";
	goto xy;
	}
	int ans1[1000]={0},ans2[1000]={0},ans3[1000]={0},ans4[1000]={0},ans5[1000]={0},ans6[1000]={0},ansb[1000]={0};
	ifstream ifs("data.txt");
	if(ifs.is_open()){
		for(i=0;i<ALLYEAR;i++){
		ifs >> str11 >> str22 >> str33 >> str44 >> str55 >> str66 >> bonuss;
		str1.push_back(str11);
		str2.push_back(str22);
		str3.push_back(str33);
		str4.push_back(str44);
		str5.push_back(str55);
		str6.push_back(str66);
		bonus.push_back(bonuss);
	}
}
	else if(!ifs.is_open()){
		cout << "파일열기에 실패했거나 해당경로에 파일이 존재하지 않습니다.\n";
		return 0;
	}
	ifs.close();
	cout << "파일 분석이 끝났습니다.\n";
	if(str1.size()==str2.size()&&str2.size()==str3.size()&&str3.size()==str4.size()&&str4.size()==str5.size()&&str5.size()==str6.size()&&str6.size()==bonus.size())
	cout << "배열크기가 같음을 확인 완료했습니다.\n";
	Sleep(1000);
	system("cls");
	years = (ALLYEAR - year)-1;
	while(1){
		for(i=0;i<100;i++){
		ans1[i]=0;
		ans2[i]=0;
		ans3[i]=0;
		ans4[i]=0;
		ans5[i]=0;
		ans6[i]=0;
		ansb[i]=0;
	}
	if(years<0) years = 0;
	for(i=years;i<bonus.size();i++){
		ans1[str1.at(i)]++;
		ans2[str2.at(i)]++;
		ans3[str3.at(i)]++;
		ans4[str4.at(i)]++;
		ans5[str5.at(i)]++;
		ans6[str6.at(i)]++;
		ansb[bonus.at(i)]++;
	}
	str11 = maxelement(ans1);
	str22 = maxelement(ans2);
	str33 = maxelement(ans3);
	str44 = maxelement(ans4);
	str55 = maxelement(ans5);
	str66 = maxelement(ans6);
	bonuss = maxelement(ansb);
	cout<<"\n[!]KEY ==>> "<<str11<<" "<<str22<<" "<<str33<<" "<<str44<<" "<<str55<<" "<<str66<<" "<<bonuss<<endl;
years++;
if(years>=ALLYEAR) break;
}
	cout << "\n\n\n[Space Bar] 확인";
	char ascii;
	while(1){
	ascii=getch();
	if(ascii==32) break;
}
}

void MainMessage(){
	cout << "■■■   ■■■■\n";
	cout << "    ■   ■  ■\n";
	cout << "■■■   ■  ■\n";
	cout << "■       ■■■■\n";
	cout << "■■■      ■\n";
	cout << "  ■        ■\n";
	cout << "■■■   ■■■■\n\n";
}

int main(void){
	RemoveCursorPoint();
	char ascii;
	SetConsoleTitle("로또통계");
	while(1){
		system("cls");
		MainMessage();
		cout << "[1] 전체통계             [2] 부분통계             [3] 종료\n";
		ascii=getch();
		if(ascii==49){
			AllGraph();
		}
		else if(ascii==50){
			Graph();
		}
		else if(ascii==51){
			return 0;
		}
	}
}
