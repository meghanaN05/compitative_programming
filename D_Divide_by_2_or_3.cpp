#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int g=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        g=__gcd(g,arr[i]);

    }
    int ans =0;
    for(int i=0;i<n;i++){
        int temp =arr[i]/g;
        while(temp%2==0){
            temp/=2;
            ans++;
        }
        while(temp%3==0){
            temp/=3;
            ans++;
        }
        if(temp!=1) {
            cout<<-1<<endl;
            return 0;
            }
    }
    cout<<ans<<endl;
}