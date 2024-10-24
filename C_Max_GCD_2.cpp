#include <bits/stdc++.h>
using namespace std;
long long f(long long a,long long b,long long ans){
    return (b/ans) -((a-1)/ans);
}
int  main() {
    long long a,b;
    cin>>a>>b;
    long long ans =b;
    while(f(a,b,ans)<2){
        ans--;
    }
    cout<<ans<<endl;

    return 0;

}