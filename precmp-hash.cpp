#include <bits/stdc++.h>
using namespace std;

// 1) precompute
// const int M = 1e9 + 7;
// const int N = 1e5 + 10;
// long long fact[N];

const int N = 1e7 + 10;
int hsh[N]; //hash array -> global array always intialize to zero


int main() {
#ifndef ONLINE_JUDGE
   freopen("input1.txt", "r", stdin);
   freopen("output1.txt", "w", stdout);
#endif

   ios_base::sync_with_stdio(false);
   cin.tie(0);


   //hasing
   /*
   Given array a of N integers. Given Q queries
   and in each query given a number X, print count of that number in
   array.
   */

   int n; cin >> n;
   int a[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      hsh[a[i]]++; //elements ki values ko increment kr rhre hain
   }// is loop ke baad humrhrea hash array pura compute ho jye ga



   int q;
   cin >> q;
   while (q--) {
      int x;
      cin >> x;
      cout << x << "->" << hsh[x] << endl;
   }
   //tc - O(N) + O(Q) = O(N)





   //basic code
   // int n; cin >> n;
   // int a[n];
   // for (int i = 0; i < n; i++) {
   //    cin >> a[i];
   // }
   // int q;
   // cin >> q;
   // while (q--) {
   //    int x;
   //    cin >> x;
   //    int cnt = 0;
   //    for (int i = 0; i < n; i++) {
   //       if (a[i] == x) {
   //          cnt++;
   //       }
   //    }
   //    cout << cnt << endl;
   // }
}
//tc - O(N) + O(Q*N) = O(N^2) = 10^10
//yeh code 1 sec mein nhi chale ga
// in order to run in 1 sec => 10^7 max









// int main() {
// #ifndef ONLINE_JUDGE
//    freopen("input1.txt", "r", stdin);
//    freopen("output1.txt", "w", stdout);
// #endif

//    ios_base::sync_with_stdio(false);
//    cin.tie(0);

//    /*Pre-Computation Techniques*/

//    //phele hi compute krlena before t testcase
//    fact[0] = fact[1] = 1;
//    for (int i = 2; i < N; i++) {
//       fact[i] = fact[i - 1] * i;
//    } // upar wale loop ke chlne ke baad mere pass saare ke saare factorial phele se hi load hai
//    // i = 1 to N store kr liye hai

//    /*
//    Given T test cases and in each test case a
//    number N. print its factorial
//    for each test case % M
//    where M = 1e9+7
//    */

//    //basic code - tc = O(T*N)

//    int t;
//    cin >> t;
//    while (t--) {
//       int n;
//       cin >> n;
//       // long long fact = 1;
//       // for (int i = 2; i <= n; i++) {
//       //    fact = (fact * i) % M;
//       // }
//       cout << fact[n] << endl;
//    }
// }
// // now tc = O(N) + O(T) improve
