#include<bits/stdc++.h>
using namespace std;
#include<fstream>
#define  cin fin
#define  cout fout

int main(){
    ifstream fin("input.in");
    ofstream fout("output.out");
    int t;
    cin>>t;
    while(t--){
       int n,x;
       cin>>n>>x;
       vector<int>gas(n,0);
       for(int i=0;i<n;i++){
        cin>>gas[i];
       }
       int maxd=0;
       for(int i=0;i<n;i++){
        maxd=max(maxd,gas[i]-((i==0)?0:gas[i-1]));
    
       }
       maxd=max(maxd,(x-gas[n-1])*2);
       cout<<maxd<<endl;
    }
    return 0;
}