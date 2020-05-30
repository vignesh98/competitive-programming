#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int ctr=0;
    char a[100];
    int m=0;
    cin>>a;
    int n = strlen(a);
    for(int i=0; i<n; i++)
    {
        if(a[i] == a[i+1])
        {
            ctr++;
            m = ctr;
            if(ctr>m)
            {
                m=ctr;
            }

        }
        else
        {
            ctr=0;
        }
    }
    if(m>=6)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
