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
    int x;
        cin >> x;
        vector<int> a(32, 0);
        int j = 0;

        while (x > 0) {
            if (x % 2 == 1) {
                if (j == 0 || a[j-1] == 0) {
                    a[j] = 1;
                } else {
                    a[j-1] = -1;
                    x += 2; 
                }
            }
            x /= 2;
            j++;
        }

        int n = 0;
        for (int i = 0; i < 32; ++i) {
            if (a[i] != 0) n = i + 1;
        }

        cout << n << endl;
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
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

