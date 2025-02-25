#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector <bool> seen(n, false);
        bool valid = true;
        for (int r = 0; r < n; r++){
            int mod_val = (r + a[r]) % n;
            if (mod_val < 0) mod_val += n;
            if (seen[mod_val]){
                valid = false;
                break;
            }
            seen[mod_val] = true;
        }
        if (!valid) cout << "NO";
        else cout << "YES";
        cout  << endl;
    }
    return 0;
}
