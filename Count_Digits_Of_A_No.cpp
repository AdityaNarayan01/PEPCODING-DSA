#include <iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
cout<<"fffff";
    int n,c=0;
    cin >> n;
    
    while(n>0)
    {
        c++;
        n=n/10;
    }
    cout << c<< endl;
    //write your code here
    //cout<<floor(log10(n))+1;
}