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

   // stress testing

   //understand how to generate the test cases

   //wap to find the second largest number in the array

   // constraints

   // 1 <= T <= 10
   // 1 <= N <= 10 ^ 5
   // 1 <= a[i] <= 10 ^ 6

   // rand() % 10 -> {0, 1, 2, ... 9}

   // to generate the test cases
   // the way you want output to be just keep the printing statement like it

   srand(time(NULL)); // the value will not be seeded..to avoid to generate the same value



   int t = rand() % 2 + 1;
   cout << t << endl;
   while (t--) {
      int n = rand() % 5 + 1;
      cout << n << endl;
      for (int i = 0; i < n; i++) {
         cout << (rand() % 6 + 1) << " ";
      }
      cout << endl;
   }

}
