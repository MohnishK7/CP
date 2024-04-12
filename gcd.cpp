#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif

   ios_base::sync_with_stdio(false);
   cin.tie(0);

   //brute force
   int t;
   cin >> t;
   while (t--) {
      int n , q;
      cin >> n >> q;
      int ar[n + 10];
      for (int i = 1; i <= n; i++) {
         cin >> ar[i];
      }
      while (q--) {
         int l, r;
         cin >> l >> r;
         int gc = 0;
         for (int i = 1 ; i <= l - 1; i++) {
            gc = __gcd(gc, ar[i]);
         }
         for (int i = r + 1 ; i <= n; i++) {
            gc = __gcd(gc, ar[i]);
         }
         cout << gc << endl;
      }
   }
}  
