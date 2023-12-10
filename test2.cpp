/*
 ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄    ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄  
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ 
▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░▌ ▐░▌  ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌
▐░▌          ▐░▌       ▐░▌▐░▌▐░▌       ▐░▌     ▐░▌       ▐░▌
▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌░▌        ▐░▌     ▐░█▄▄▄▄▄▄▄█░▌
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌         ▐░▌     ▐░░░░░░░░░░▌ 
 ▀▀▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌        ▐░▌     ▐░█▀▀▀▀▀▀▀█░▌
          ▐░▌▐░▌       ▐░▌▐░▌▐░▌       ▐░▌     ▐░▌       ▐░▌
 ▄▄▄▄▄▄▄▄▄█░▌▐░▌       ▐░▌▐░▌ ▐░▌  ▄▄▄▄█░█▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌
▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ 
 ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀    ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀  
*/
 
#include<bits/stdc++.h>
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define np cout << -1 << endl
#define rn return
#define cout(a) cout << a << endl
using namespace std;
 
int dx[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy[]={1, -1, 0, 0, 1, -1, 1, -1};
int mx = INT_MIN;
int mn = INT_MAX;

/*binPow , findPrimeFactors , printBinary*/
//  ==============================================================================================
int binPow(int base , int exponent){int result = 1;while(exponent > 0){if (exponent % 2 == 1)base=
base * base;exponent = exponent / 2;}return result;}map <int , int> findPrimeFactors(int num){map<
int , int> result;while (num % 2 == 0) {result[2]++;num /= 2;}for (int i = 3; i * i <= num; i += 2)
{while (num % i == 0) {result[i]++;num /= i;}}if (num > 2) {result[num]++;}return result;}   string
printBinary(int number){std::bitset<CHAR_BIT * sizeof(number)> binary(number);          std::string 
binaryString = binary.to_string();size_t firstNonZero = binaryString.find_first_not_of('0');
if (firstNonZero != std::string::npos) {binaryString = binaryString.substr(firstNonZero);} else {
binaryString = "0";}return binaryString;}
//  ==============================================================================================

int xd[4] = {-1, 1, -1, 1}, yd[4] = {-1, -1, 1, 1};
void solve(){
    int a , b;
    int Xk , Yk , Xq , Yq;
    cin >> a >> b >> Xk >> Yk >> Xq >> Yq;
    vector < pair<int,int> > v1 , v2;
    for(int i = 0; i < 4; i++){
        v1.push_back({Xk + xd[i]*a , Yk + yd[i]*b});
        v2.push_back({Xq + xd[i]*a , Yq + yd[i]*b});
        v1.push_back({Xk + xd[i]*b , Yk + yd[i]*a});
        v2.push_back({Xq + xd[i]*b , Yq + yd[i]*a});
    }
    std::set<std::pair<int, int>> set1(v1.begin(), v1.end());
    std::set<std::pair<int, int>> set2(v2.begin(), v2.end());

    int ans = 0;
    for(auto pt1 : set1){
        for(auto pt2 : set2){
            if(pt1 == pt2) ans
        }
    }
    std::cout << ans << std::endl;
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
