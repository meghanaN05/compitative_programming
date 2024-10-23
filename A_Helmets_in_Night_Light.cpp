#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<pair<long long,long long>>v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i]={0,x};
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i].first=x;
        }
        sort(v.begin(),v.end());
        long long cost =p;
        long long people=1;
        for(auto it:v){
            long long noshare=it.second;
            long long sharingmoney =it.first;
            if(sharingmoney>=p){
                  break;
            }
           if(people+noshare>n){
                cost+=(n-people)*sharingmoney;
                people=n;
                break;
            }
            else{
                cost+=noshare+sharingmoney;
                people+=noshare;
            }
        }
        cost +=(n-people)*p;
        cout<<cost<<endl;
    }
    return 0;
}
