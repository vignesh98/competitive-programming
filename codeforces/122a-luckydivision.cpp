#include<iostream>

using namespace std;

int main()
{
    int arr[14] = {4,7,44,77,47,74,477,747,774,444,777,447,474,744};
    int ctr=0;
    int n;
    cin >>n;
    for(int i=0; i<14; i++)
    {
        if(n == arr[i])
        {
            ctr=1;
            break;
        }
        else if(n % arr[i] == 0){
            ctr=1;
            break;
        }
        else{
            ctr=0;
            }
    }

    if(ctr == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
