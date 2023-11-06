#include<iostream>
using namespace std;
int main()
{
	int a=10;  #定义
	int *p;
	p=&a; 
	cout<<*p<<endl;   #输出
	cout<<*p++<<endl;  #输出
	return 0;
} 
