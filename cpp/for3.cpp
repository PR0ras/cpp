#include<iostream>
int main()
{
	using namespace std;
	int i(0);
	char ch=0;
	char sh=67;
	for(i=0;i<256;i++)
	{
		cout<<ch;
		ch =ch+1;
	}
	cout <<ch<<" ";
	return 0;
}

