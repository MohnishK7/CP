#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   // int t;
   // cin >> t;
   // while (t--) {
   //    int n;
   //    cin >> n;
   //    int a[n];
   //    for (int i = 0; i < n; i++) {
   //       cin >> a[i];
   //    }
   //    int XORR = 0;
   //    for (int i = 0; i < n; i++) {
   //       XORR = XORR ^ a[i];
   //    }
   //    cout << XORR;
   // }

   // swap without using third variable
   // a = a ^ b;
   // b = a ^ b;
   // a = a ^ b;

   // cout << a << " " << b << endl;

   // given N print XOR if the number is between (1 - N)

   // int n;
   // cin >> n;
   // int XORR = 0;
   // for (int i = 1; i <= n; i++) {
   //    XORR = XORR ^ i;
   // }
   // cout << XORR << '\n';

   /*The above code will give O(N)*/

   //better solution ----> with tc of O(1)

   // int n;
   // cin >> n;

   // if (n % 4 == 0) {
   //    cout << n << '\n';
   // }
   // if (n % 4 == 1) {
   //    cout << 1 << '\n';
   // }
   // if (n % 4 == 2) {
   //    cout << n + 1 << '\n';
   // }
   // if (n % 4 == 3) {
   //    cout << 0 << '\n';
   // }


   // given a range (L - R) , print the XOR.
   // int n;
   // cin >> n;
   // vector<int> a(n);
   // int l, r;
   // cin >> l >> r;

   // for (int i = 0; i < n; i++) {
   //    cin >> a[i];
   // }

   // int XORR = 0;
   // for (int i = l; i <= r; i++) {
   //    XORR = XORR ^ a[i];
   // }
   // cout << XORR << '\n';

   // return 0;
}
