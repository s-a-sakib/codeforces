#include<bits/stdc++.h>
#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define np cout << -1 << endl
#define rn return
#define cout(a) cout << a << endl
using namespace std;


void solve(){
    int n;
    cin >> n;
    int a[n + 2];
    a[n + 1] = 5000;
    for(int i = 1; i <= n; i++) cin >> a[i];
    if(n < 4){
        yes;
        rn;
    }
    if(n >= 4){
        if(a[3] > a[4]){
            no;
            rn;
        }
    }
    if(n >= 5 or n <= 8){
        for(int i = 6; i <= min(n, 8); i++){
            if(a[i] < a[i - 1]){
                no;
                rn;
            }
        }
    }
    if(n >= 9 or n <= 16){
        for(int i = 10; i <= min(n, 16); i++){
            if(a[i] < a[i - 1]){
                no;
                rn;
            }
        }
    }
    if(n >= 17 or n <= 32){
        for(int i = 18; i <= min(n, 32); i++){
            if(a[i] < a[i - 1]){
                no;
                rn;
            }
        }
    }
    yes;
    
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
