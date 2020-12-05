#include<iostream>
#include<cmath>
#include<string.h>
#include<algorithm>
#define ll long long int
using namespace std;

int main()
{
    string a;
    cin>>a;
    int ctr=0,flag=0;
    int n = a.length();
    for(int i=0; i<n; i++)
        {
            if(a[i] == '4' || a[i] == '7'){
                ctr++;
            }
        }
    string c = to_string(ctr);
    for(int i=0; i<c.length(); i++)
        {
            if(c[i] == '4' || c[i] == '7'){
            flag = 1;
            }
            else flag =0;
        }
    if(flag == 1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
