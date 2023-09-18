#include <bits/stdc++.h>
using namespace std;

//myanswer
int secLargest(int a[], int n) {
   if (n <= 1) return -1;
   sort(a, a + n);
   return a[n - 2];
}

// someone else code
int writeBrute(int a[], int n) {
   if (n <= 1) return -1;

   int first = a[0];
   for (int i = 0; i < n; i++) {
      first = max(first, a[i]);
   }
   int second = -1;
   for (int i = 0; i < n; i++) {
      if (first != a[i]) {
         second = max(second, a[i]);
      }
   }
   return second;
}


int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   srand(time(NULL));

   int cnt = 1;
   while (cnt <= 1000) {
      int n = rand() % 5 + 1;
      int a[n];
      for (int i = 0; i < n; i++) a[i] = rand() % 7 + 1;

      int correctAns = writeBrute(a, n);
      int myans = secLargest(a, n);
      if (correctAns != myans) {
         cout << n << endl;
         for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
         }
         cout << endl;
         break;
      }
      cnt++;

   }

}
