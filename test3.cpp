#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int l = 1, r = n;
        int ans = -1, cnt;

        while (l <= r) {
            int mid = (l + r) / 2;
            cnt = 0;
            for (int i = 1; i <= n; i++) {
                int j = i + mid;
                if (j > n) j -= n;
                cnt += 1;
                while (j != i && j < n && j + mid <= i + n - 1) {
                    j += mid;
                    cnt += 1;
                }
            }
            if (cnt >= k) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        int pairs = 0;
        for (int i = 1; i <= n; i++) {
            int j = i + ans;
            if (j > n) j -= n;
            pairs += 1;
            while (j != i && j < n && j + ans <= i + n - 1) {
                j += ans;
                pairs += 1;
            }
        }

        cout << ans << " " << pairs << endl;
    }

    return 0;
}
