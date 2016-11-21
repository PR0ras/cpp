#include<iostream>
int main()
{
	using namespace std;
	char ch= 'M';
	int i= ch;
	cout<<ch<<" "<<i<<endl;
	ch = ch + 1;
	i = ch;
	cout<<ch<<" "<<i<<endl;
	cout.put(ch);
	cout.put('!');
	cout << endl;
	return 0;
	
}
