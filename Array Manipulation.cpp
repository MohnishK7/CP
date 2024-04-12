#include <bits/stdc++.h>
using namespace std;

//Array manipulation -> hackerrank
const int N = 1e7 + 10;
long long ar[N];

int main() {
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif

   ios_base::sync_with_stdio(false);
   cin.tie(0);

   //brute force
   int n, q;
   cin >> n >> q;
   while (q--) {
      int a, b, d;
      cin >> a >> b >> d;
      for (int i = a; i <= b; i++) {
         ar[i] += d;
      }
   }
   long long maxi = -1;
   for (int i = 1; i <= n; i++) {
      maxi = max(maxi, ar[i]);
   }
   cout << maxi << endl;
}
