#include<iostream>
#include<stdio.h>
int st(int);
int main()
{
	using namespace std;
	int stone;
	cout<<"Enter the weight in staone:";
	cin >>stone;
	int pounds = st(stone);
	cout<<stone<<" stone =";
	cout <<pounds << " pounds."<<endl;
	printf("Hello,world");
}

int st(int sts)
{
	return 14*sts;
}
