#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
#define d double

int main()
{
    ll a;
    ll arr[200000];
    arr[0]=0;
    cin >> a;
    for(ll i=1; i<=a-1; i++)
    {
        cin >>arr[i];
    }
    sort(arr,arr+a);
    for(ll j =1; j<=a; j++)
    {
        if(arr[j] != j){

        cout<<j;
        break;
        }
    }
    return 0;
}
