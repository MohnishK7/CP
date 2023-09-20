#include <bits/stdc++.h>
using namespace std;
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// Header Files End
#define F first
#define S second
#define all(X) (X).begin(), (X).end()
#define REP(i,a,b) for (int i = a; i<b; i++)
#define S second
#define ii pair<int, int>
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl '\n'
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



int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   // Missing Number -- tc -> O(N)
   ll n;
   cin >> n;
   ll a[n];
   ll sum = 0;
   for (int i = 0; i < n - 1; i++) {
      cin >> a[i];
      sum += a[i];
   }
   ll ans = n * (n + 1) / 2;
   cout << ans - sum;

}



