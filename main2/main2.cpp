#include <iostream>
using std::cout;
using std::endl;
using std::cin;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int fun2 (int x,int y)
{
	if(x == 0){
		return 1;
	}
	
	if(x == 1){
		return y;
	}
	
	if(x < 0){
		return 0;
	}
	
	if(y == 1){
		return 1;		
	}
	
	if(y == 2){
		return x+1;
	}
	
	if(y == 3){
		return 0.5*x*(x+3) + 1;
	}
	
	return fun2(x,y-1)+fun2(x-1,y-1)+fun2(x-2,y-1)+fun2(x-3,y-1)+fun2(x-4,y-1)+fun2(x-5,y-1)+fun2(x-6,y-1)+fun2(x-7,y-1)+fun2(x-8,y-1)+fun2(x-9,y-1);
}

void fun1 (int value,int& count,int c,const int& e)
{
	if(c > 0){
		for (int i = 0;i < 10;i++){
			fun1(value + i, count,c-1,e);
		}		
	}else if (c == 0){
		for (int i = 0;i < 10;i++){
			if(value + i == e){
				count++;
			}
		}
	} else {
		if (value == e){
			count++;
		}
	}
}

int main(int argc, char** argv)
{
	int y;
	int count;
begin:
	count = 0;
	cin >> y;
	cout << endl;
	int x = y;
	cout << fun2(x-1,y-1)+fun2(x-2,y-1)+fun2(x-3,y-1)+fun2(x-4,y-1)+fun2(x-5,y-1)+fun2(x-6,y-1)+fun2(x-7,y-1)+fun2(x-8,y-1)+fun2(x-9,y-1) << endl;
	
	for	(int i = 1;i < 10;i++){
		fun1(i,count,y-2,y);
	}
	cout << count << endl;
goto begin;
	return 0;
}
