#include<iostream>

using namespace std;

int main()
{
    int l,b,ctr=0;
    cin>>l>>b;
    while(l<=b){
        l = l*3;
        b=b*2;
        ctr++;
    }
    cout<<ctr;
    return 0;
}
