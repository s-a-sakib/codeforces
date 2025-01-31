/*
                                    بِسۡمِ ٱللَّهِ ٱلرَّحۡمَٰنِ ٱلرَّحِيمِ
                                    ٱلۡحَمۡدُ لِلَّهِ رَبِّ ٱلۡعَٰلَمِينَ
                                    ٱلرَّحۡمَٰنِ ٱلرَّحِيمِ
                                    مَٰلِكِ يَوۡمِ ٱلدِّينِ
                                    إِيَّاكَ نَعۡبُدُ وَإِيَّاكَ نَسۡتَعِينُ
                                    ٱهۡدِنَا ٱلصِّرَٰطَ ٱلۡمُسۡتَقِيمَ
                    صِرَٰطَ ٱلَّذِينَ أَنۡعَمۡتَ عَلَيۡهِمۡ غَيۡرِ ٱلۡمَغۡضُوبِ عَلَيۡهِمۡ وَلَا ٱلضَّآلِّينَ
*/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define np cout << -1 << endl
#define rn return
#define cout(a) cout << a << endl
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
using namespace __gnu_pbds; 
 
int dx[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy[]={1, -1, 0, 0, 1, -1, 1, -1};
int mx = INT_MIN;
int mn = INT_MAX;

/*binPow , findPrimeFactors , printBinary , sortbysec*/
//  ==============================================================================================
int binPow(int base , int exponent){int result = 1;while(exponent > 0){if (exponent % 2 == 1)base=
base * base;exponent = exponent / 2;}return result;}map <int , int> findPrimeFactors(int num){map<
int , int> result;while (num % 2 == 0) {result[2]++;num /= 2;}for (int i = 3; i * i <= num; i += 2)
{while (num % i == 0) {result[i]++;num /= i;}}if (num > 2) {result[num]++;}return result;}   string
printBinary(int number){std::bitset<CHAR_BIT * sizeof(number)> binary(number);          std::string 
binaryString = binary.to_string();size_t firstNonZero = binaryString.find_first_not_of('0');
if (firstNonZero != std::string::npos) {binaryString = binaryString.substr(firstNonZero);} else {
binaryString = "0";}return binaryString;} bool sortbysec(const pair<int,int> &a,const pair<int,int> 
&b){return (a.second < b.second);}
//  ==============================================================================================

#define MAX_VALUE 1000000


void solve(){
    ll n, m;
    cin >> n >> m;
    vector <vll> ve(n, vll(m));
    vll p(n, -16);
    bool val = true;
    ll c = 0;
    for (vll &we : ve) {
        for (ll &i : we) cin >> i;
        ll minN = *min_element(we.begin(), we.end());
        if (minN < n) p[minN] = c++;
        val &= minN < n;
        sort(we.begin(), we.end());
        ll last = we[0]-n;
        for (ll i : we) {
            val &= last+n == i;
            last = i;
        }
    }
    if (!val) {
        cout << "-1\n";
        return;
    }
    for (ll i : p) cout << i+1 << ' ';
    cout << '\n';
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
