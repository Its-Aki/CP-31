#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE 
    freopen("input.in", "r", stdin); 
    freopen("output.out", "w", stdout); 
    #endif
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        if(k==1){
            int i=1;
            for(i=1;i<n;i++){
                if(v[i-1]>v[i]){
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(i==n){
              cout<<"Yes"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}