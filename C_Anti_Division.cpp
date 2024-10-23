#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b;
ll gcd(ll num1, ll num2){
    if(num1==0)
    return num2;
    return gcd(num2%num1,num1);
}
ll lcm(ll x,ll y){
    return (x*y)/gcd(x,y);
}
ll f(ll x){
    return (b/x-((a-1)/x));
}
int main(){
    ll c,d;
    cin>>a>>b>>c>>d;
    ll totalrange =b-a+1;
    ll removed=f(c)+f(d)-f(lcm(c,d));
    cout<<totalrange-removed<<endl;
    return 0;
}

