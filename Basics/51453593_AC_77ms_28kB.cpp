#include<iostream>
using namespace std;

int main()
{
	int days,y,m,d;
	cin>>days;
	y=days/365;
	days=days%365;
	m=days/30;
	d=days%30;
	cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days"<<endl;

	
	return 0;
}