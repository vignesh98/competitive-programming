#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    int k,ctr=1;
    cin>>n>>k;
    while(ctr<=k)
    {
        ctr++;
        if(n%10 ==0)
        {
            n = n/10;
        }
        else
        {
            n = n-1;
        }
    }
    cout<<n;
    return 0;
}
