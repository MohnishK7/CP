#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define A(X) (X).begin(), (X).end()
#define F0R(i, a, b) for (int i = a; i < b; i++)
#define S2 S
#define PII pair<int, int>
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
typedef long long ll;
typedef vector<int> vi;

#define E '\n'
typedef int64_t I64;
// policy based data structure
// using namespace __gnu_pbds;
// template <class T>
//  using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//  template <class T>
//  using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;

// void solve() {
//    // my code
// }

// long long dp[5005];
// const int mod = 998244353;

// check for prime number
// bool check(int x)
// {
//    int i;
//    for (i = 2; i <= sqrt(x); i++)
//    {if (x % i == 0) return true;}
//    return false;
//}

int main() {
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   //lucky Number
   // string s;
   // cin >> s;

   // bool f = false;

   // for (int i = 0; i < s.size(); i++) {
   //    if (s[1] % s[0] == 0) {
   //       f = true;
   //    }
   // }

   // if (f == true) {
   //    cout << "YES";
   // } else {
   //    cout << "NO";
   // }
   int tt;
   cin >> tt;
   int sum = 0;
   int maxi = 0;
   while (tt--) {
      int n;
      cin >> n;
      sum += n;
      maxi = max(maxi, n);
   }
   sum -= maxi / 2;
   cout << sum << endl;
   return 0;

}

