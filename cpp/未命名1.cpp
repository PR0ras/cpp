#include<iostream>
int main(void)
{
	using namespace std;
	int yams[3];
	yams[0]=7;
	yams[1]=8;
	yams[2]=6;
	int yamcosts[3] = {20,30,5};
	cout<<yams[0] + yams[1] + yams[2] <<endl;
	cout <<yams[1] <<yamcosts[1]<<endl;
	int total =yams[0]*yamcosts[0]+yams[1]*yamcosts[1];
	total =total+yams[2]*yamcosts[2];
	cout<<total<<endl;
	cout<<sizeof yams<<endl<<sizeof yams[0];
	return 0;
}
