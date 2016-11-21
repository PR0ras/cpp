#include <iostream>
#include<climits>
int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	cout << sizeof(int)<<endl;
	cout << sizeof n_short << endl;
	cout << sizeof n_long << endl;
	cout << sizeof n_llong << endl;
	
	cout << n_int << endl;
	cout << n_short << endl;
	cout << n_long << endl;
	cout << n_llong << endl;
	
	cout<< INT_MIN << endl;
	cout<< CHAR_BIT << endl;
	return 0;
}
