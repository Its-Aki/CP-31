#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE 
    freopen("input.in", "r", stdin); 
    freopen("output.out", "w", stdout); 
    #endif

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b){
            cout<<"yes"<<endl;
        }
        else if(n-(a+b)>1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}