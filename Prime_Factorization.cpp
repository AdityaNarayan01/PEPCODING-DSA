#include<iostream>
#include<math.h>
using namespace std;

void digOfNum(int n)
{
	int nod = floor(log10(n))+1;
	int div = pow(10 ,nod - 1);
	int q,r;

	while(div > 0)
	{
		q = n / div;
		r = n % div;
		cout<<q<<"\n";
		n = r;
		div = div /10;
	}
}

int main()
{
	int n;
	cin>>n;

	digOfNum(n);

	return 0;
}