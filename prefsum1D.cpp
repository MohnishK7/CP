/*
   Given array a of N integers. Given Q queries
   and in each query given L and R print sum of
   array elements from L to R (L, R included)
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];

//prefix sum
int pf[N];

int main() {
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif

   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      cin >> a[i];
      pf[i] = pf[i - 1] + a[i]; //prefix sum array calculate
   }// 1 based lene se 0 wala automatic handle ho rhra hai


   int q;
   cin >> q;
   while (q--) {
      int l, r;
      cin >> l >> r;
      // long long sum = 0;
      // for (int i = l; i <= r; i++) {
      //    sum += a[i];
      // }
      // cout << sum << endl; //tc -> O(N) + O(Q*N)
      cout << pf[r] - pf[l - 1] << endl;
   }// tc -> O(N);
}
