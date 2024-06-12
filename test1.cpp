#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define np cout << -1 << endl
#define rn return
#define cout(a) cout << a << endl
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
int mx = INT_MIN;
int mn = INT_MAX;

void solve() {
    string a , b;
    cin >> a >> b;
    char x = a[0], y = b[0];
    a[0] = y;
    b[0] = x;
    cout << a <<" "<< b << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}