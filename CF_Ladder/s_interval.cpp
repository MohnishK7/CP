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

   //code here
   double X;
   cin >> X;

   if (X >= 0 && X <= 25) {
      cout << "Interval [0,25]" << endl;
   } else if (X > 25 && X <= 50) {
      cout << "Interval (25,50]" << endl;
   } else if (X > 50 && X <= 75) {
      cout << "Interval (50,75]" << endl;
   } else if (X > 75 && X <= 100) {
      cout << "Interval (75,100]" << endl;
   } else {
      cout << "Out of Intervals" << endl;
   }
}
