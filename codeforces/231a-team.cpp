#include<iostream>

using namespace std;

int main()
{

    int n,a,b,c,ctr=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        if(a==1 && b==1 && c==1)
        {
            ctr++;
        }
        else if((a || b ==  1) && c ==1)
        {
            ctr ++;
        }
        else if(a == 1 && (b || c ==1)){

            ctr++;
        }
    }
cout << ctr;
    return 0;
}
