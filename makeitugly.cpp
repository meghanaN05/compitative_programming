#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int lst = -1, ans = n;
        for (int i = 0; i < n; i++) {
            if (a[i] != a[0]) {
                ans = min(ans, i - lst - 1);
                lst = i;
            }
        }
        ans = min(ans, n - lst - 1);

        if (ans == n) {
            cout << -1 << "\n";
        } else {
            cout << ans << "\n";
        }
    }
    return 0;

    return 0;
}
