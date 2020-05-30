#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{

    char str[100];
    cin>>str;
    int n = strlen(str);
    int ctr=0;
    sort(str,str+n);

    for(int i=0; i<n; i++)
    {
        if(str[i] != str[i+1])
        {
            ctr++;
        }

    }
    if(ctr % 2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
