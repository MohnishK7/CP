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

   // Sleuth
   string s;
   getline(cin, s);
   char last;
   for (int i = 0; i < s.length(); i++)
   {
      if (s[i] == '?' || s[i] == ' ')
         continue;
      last = s[i];
   }
   if (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u' || last == 'y')
      cout << "YES" << endl;
   else if (last == 'A' || last == 'E' || last == 'I' || last == 'O' || last == 'U' || last == 'Y')
      cout << "YES" << endl;
   else
      cout << "NO" << endl;
}




