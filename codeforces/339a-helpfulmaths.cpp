#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string a;
    int arr[100],ctr=0;
    cin>>a;

    for(int i=0; i<a.length(); i++)
        {

            if(a[i] != 43)
                {

                  char x = a[i];
                  int a = x - '0';
                  arr[ctr] = a;
                  ctr++;
                }
        }
    sort(arr,arr+ctr);
    for(int i=0; i<ctr; i++)
        {
            cout<<arr[i];
            if(i!=ctr-1) cout<<"+";
        }
    return 0;
}
