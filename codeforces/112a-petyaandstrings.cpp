#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

string convert(char v[100])
{
    int len = strlen(v);
    for(int i=0; i<len; i++)
        {
        if(v[i] >=65 && v[i] <= 90)
            v[i] = v[i] + 32;
        }
    return v;
}

int main()
{

    char a[100];
    char b[100];
    cin >>a>>b;
    string x = convert(a);
    string y = convert(b);
    if(x<y){
    cout<<"-1";
    }
    else if(x>y){
    cout<<"1";
    }
    else{
    cout<<"0";
    }
    return 0;
}
