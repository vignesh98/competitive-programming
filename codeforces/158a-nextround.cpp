#include<iostream>

using namespace std;

int main()
{

    int a,b;//input vals
    int temp,arr[100];
    cin >> a>>b;
    temp = b;
    int val = arr[b-1];
    for(int i=0; i<a; i++)
        {
            cin>>arr[i];

        }
    for(int i=b-1; i<a; i++)
        {
            if(val==arr[i+1])
            {
                temp++;
            }
            else if(arr[i]=0) {cout<<"0";}
            else{
            cout <<b;
            }
        }
        cout<<temp;
    return 0;
}
