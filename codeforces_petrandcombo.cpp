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

   // check if the ith bit is set or not
   // we will be using mask --> mask = (1 << i) , bool set = (mask & n)

   // int n;
   // cin >> n;
   // int i ;
   // cin >> i;

   // bool bitSet = ((n >> i) & 1) != 0;
   // if (bitSet) {
   //    cout << "The " << i << "-th bit is set (1)." << endl;
   // } else {
   //    cout << "The " << i << "-th bit is not set (0)." << endl;
   // }

   // return 0;

   /*------------------Day 2 Bit Manipulation------------------*/

   // N int -> every integer twice and two integer appears onces..print that two int.

   // below code will have tc -> O(n2)
   // int n;
   // cin >> n;
   // int a[n];
   // for (int i = 0; i < n; i++) {
   //    cin >> a[i];
   // }

   // for (int i = 0; i < n; i++) {
   //    int cnt = 0;
   //    for (int j = 0; j < n; j++) {
   //       if (a[i] == a[j]) cnt++;
   //    }
   //    if (cnt == 1)
   //       cout << a[i] << '\n';
   // }


   // this will go tc -> O(nlogn) as map tc is O(logn)
   // int n;
   // cin >> n;
   // int a[n];
   // for (int i = 0; i < n; i++) {
   //    cin >> a[i];
   // }

   // map<int, int> mpp;
   // for (int i = 0; i < n; i++) {
   //    mpp[a[i]]++; // fill data in the map
   // }

   // // iterate in the map
   // for (auto it : mpp) {
   //    if (it.second == 1)
   //       cout << it.first; // print the key
   // }

   int n;
   cin >> n;
   int sum = 0;
   int a[n];

   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }

   // Loop to iterate through all possible subsets of a
   for (int i = 0; i < (1 << n); i++) {
      sum = 0;
      for (int j = 0; j < n; j++) {
         if ((i >> j) & 1) { // Check if the j-th element is included in the subset
            sum += a[j];
         } else {
            sum -= a[j];
         }
      }
      if (sum % 360 == 0) {
         cout << "Yes" << endl;
         return 0; // Exit the program as we found a valid subset
      }
   }

   // If no subset was found
   cout << "No" << endl;
   return 0;
}
