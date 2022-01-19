#include <iostream>
using namespace std;

void printDigit(int n)
{
	int r;

	if (n == 0) {
		return;
	}

	r = n % 10;
	printDigit(n / 10);

	cout<<r<<endl;
}


int main()
{
	int n;
    cin>>n;
    printDigit(n);
	return 0;
}