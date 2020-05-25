#include<iostream>

using namespace std;

int main(){


    int maxval=0;
    int temp=0;
    string in;
    cin >>in;
    for(int i=0;i<in.length();i++){
        if(in[i] == in[i+1]){
        maxval++;
        if(maxval>temp){temp=maxval;}
        }
        else{
        maxval=0;
        }
    }
cout<<temp+1;
return 0;
}
