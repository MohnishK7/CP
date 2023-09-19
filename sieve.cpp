#include <bits/stdc++.h>
using namespace std;


// tc -> O(nlog(logn))
int N = 1000000;
bool sieve[1000001];
void createSieve() {
   for (int i = 2; i <= N; i++) {
      sieve[i] = true;
   }
   for (int i = 2; i <= N; i++) { // i*i<=N
      if (sieve[i] == true) { // to marks it multiples
         for (int j = 2 * i; j <= N; j += i) { // j = i*i this first optimization we do
            sieve[i] = false;
         }
      }
   }
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



   // sieve of eratosthenes
   // some who is false will not mark its multiples as someone else would have already mark its multiples-> the black box
   // #precompute

   // tc -> O(nlog(logn))
   createSieve();
   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      if (sieve[n] == true) {
         cout << "TRUE" << endl;
      }
      else {
         cout << "NO" << endl;
      }
   }
}















