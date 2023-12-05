#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back

void sakib()
{
    int n;
    string s;
    cin >> n >> s;

    // Using a map to store the frequency of each character in the string
    map < char , int > m;
    for(int i = 0 ; i < n ; i++){
        m[s[i]]++;
    }

    // Finding the maximum frequency among all characters
    int mn = 0;
    for(auto [x , y] : m){
        if(mn < y) mn = y;
    }

    if(n % 2 == 0){
        if(mn <= (n / 2)){
            cout << 0 << endl;
        }else{
            cout << 2 * mn - n << endl;
        }
    }else{
        if(mn > (n / 2)){
            cout << 2 * mn - n << endl;
        }else{
            cout << 1 << endl;
        }    
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        sakib();
    }

    return 0;
}
