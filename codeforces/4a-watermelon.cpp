// https://codeforces.com/problemset/problem/4/A


#include <iostream>

using namespace std;
int main(){
    int a;
    cin >> a;
    if(a%2 == 0){
        if(a>2){
            cout << "YES";
        }
        else{
            cout <<"NO";
        }
    }
    else{

        cout << "NO";
    }

    return 0;
}