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

   // collatz Problem
   int s;
   cin >> s;
   set<int>st;
   int x = s;
   while (st.count(x) == 0) {
      st.insert(x);
      if (x % 2 == 0) {
         x /= 2;
      }
      else {
         x = x * 3 + 1;
      }
   }
   cout << st.size() + 1 << endl;
}

