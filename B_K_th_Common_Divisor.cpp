#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,k;
    cin>>a>>b>>k;
    vector<long long>factors;
    for(long long i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            factors.push_back(i);
        }
    }
    sort(factors.begin(),factors.end());
    cout<<factors[factors.size()-k]<<endl;
    return 0;
}