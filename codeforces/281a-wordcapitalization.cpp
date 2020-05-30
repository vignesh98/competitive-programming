#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin>>a;
    if(a[0] >=65 && a[0] <=90){
    cout<<a;
    }
    else{
    a[0] = a[0]-32;
    cout<<a;
    }
    return 0;
}
