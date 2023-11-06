#include<iostream>
using namespace std;
int main()
{
	int a=10;  #定义
	int *p;    #定义
	p=&a;       #赋值
	cout<<*p<<endl;   #输出
	cout<<*p++<<endl;  #输出
	return 0;
} 
