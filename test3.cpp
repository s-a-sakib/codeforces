#include<bits/stdc++.h>
#define int long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define np cout << -1 << endl
#define rn return
#define cout(a) cout << a << endl

using namespace std;


void solve(){
    int n , k , x = -1;
    cin >> n >> k;
    int v[n];
    for(int i = 0 ; i < n ; i++) cin >> v[i];

    if(n == 1){
            cout(0);
            rn;
    }
    sort(v , v + n);
    for(int i = 1 ; i < n ; i++){
        if(v[i - 1] - v[i] > k) x = i;
    }
    cout(x - 1);
}
        
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
