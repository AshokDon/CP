#include<bits/stdc++.h>
//how i debug my code in cp
//common ways of debugging is 1.using Print statement 
//2.Using Debugger

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
using namespace std;


void _print(int a){
    cerr << a;
   
}
void _print(char a){
    cerr << a;
   
}
void _print(string a){
    cerr << a;
   
}
void _print(bool a){
    cerr << a;
   
}
template<class T> void _print(vector<T>v1){
    cerr<<"[";
    for(T i  : v1){
       _print(i);
       cerr << " ";
    }
    cerr << "]";
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    #endif

    int a = 10, b = 20;

    //lot of code

    vector<int>v1 = {1, 2, 3};
    debug(v1);
    debug(a);
}
