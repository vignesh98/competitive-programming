#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,x,y,z;
    int xsum=0,ysum=0,zsum=0;
    cin>>n;
    for(int i=0; i<n; i++)
        {
            cin>>x>>y>>z;
            xsum = xsum+x;
            ysum = ysum+y;
            zsum = zsum+z;
        }
    if(xsum ==0 && ysum ==0&&zsum==0){
    cout<<"YES";
    }
    else{cout<<"NO";}
    return 0;
}
