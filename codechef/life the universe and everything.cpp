#include<iostream>
#include<limits.h>
#include<algorithm>
#define a 100

using namespace std;

int main()
{
    int arr[100],ctr=0,temp;
    for(int i=0; i<100; i++)
    {
        cin >>temp;
        if(temp==42)
        {
            break;
        }
        else
        {
            arr[i]=temp;
        }
        ctr++;
    }
    sort(arr,arr+ctr);
    for(int i=0; i<ctr; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
