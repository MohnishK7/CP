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
#define i64  int64_t
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

int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   //Boy or Girl
   // char s[1001];
   // cin.getline(s, sizeof(s));

   // int len = strlen(s);

   // vector<char> v;
   // for (int i = 0; i < len; i++) {
   //    if (find(v.begin(), v.end(), s[i]) == v.end()) {
   //       v.push_back(s[i]);
   //    }
   // }

   // if (v.size() % 2 == 0) {
   //    cout << "CHAT WITH HER!" << endl;
   // }
   // else {
   //    cout << "IGNORE HIM!" << endl;
   // }

   // another way
   string str;
   cin >> str;
   unordered_set<char>s;
   for (int i = 0; i < str.size(); i++) {
      s.insert(str[i]);
   }
   if (s.size() % 2 == 0) {
      cout << "CHAT WITH HER!" << '\n';
   }
   else {
      cout << "IGNORE HIM!" << '\n';
   }

}



