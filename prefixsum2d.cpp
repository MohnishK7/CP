/*
   Given 2d array a of N*N integers. Given Q queries and
   in each query given a, b, c and d. Print sum of square
   represented by (a,b) as top left point and (c,d) as top bottom right
   point
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;

//basic
//int ar[N][N];

int ar[N][N];
long long pf[N][N];

int main() {
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif

   ios_base::sync_with_stdio(false);
   cin.tie(0);

   //basic code
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
         cin >> ar[i][j];
         pf[i][j] = ar[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
      }
   }

   int q;
   cin >> q;
   while (q--) {
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      // long long sum = 0;
      // for (int i = a; i <= c; i++) {
      //    for (int j = b; j <= d; j++) {
      //       sum += ar[i][j];
      //    }
      // }
      // cout << sum << endl;

      //prefix sum 2d
      cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << endl;
      //tc -> O(N^2) + O(Q)



   } //tc -> O(N^2) + O(Q*N^2)

}
