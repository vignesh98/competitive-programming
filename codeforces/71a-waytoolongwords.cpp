#include<iostream>
#include<string>
using namespace std;

void word(string w)
{

    int len = w.length();
    if(len<=10)
    {
        cout<<w<<endl;
    }
    else{
        cout<<w[0]<<len-2<<w[len-1]<<endl;
    }
}

int main()
{

    int i=1,n;
    string val;
    cin>>n;
    while(i<=n)
    {
        cin>>val;
        word(val);
        i++;
    }
    return 0;
}
