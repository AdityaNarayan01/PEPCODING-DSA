/*  PROBLEM:- FIND HCF/GCD

APPROACH:- EUCLIDEAN ALGO

gcd(a,b)=gcd(a-b,b)     where a>b

proof:  let 'g' be GCD of 'a'and 'b'

a=gc  ;   b=gy   ; GCD(x,y)=1

(a-b)=g(x-y)


*/
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
	 return gcd(b,a%b);
}

int main()
{
	int a,b;
	cout<<"enter 2 no for hcf\n";
	cin>>a>>b;
	cout<<gcd(a,b);

	return 0;
}