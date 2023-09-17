#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define all(X) (X).begin(), (X).end()
#define REP(i,a,b) for (int i = a; i<b; i++)
#define S second
#define ii pair<int, int>
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl '\n'

const int M = 1e9 + 7;
const int N = 1e3 + 10;

long long fact[N];

/* Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/


int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin >> t;
   while (t--) {
      int n, q;
      cin >> n >> q;
      int a[n + 10];
      for (int i = 1; i <= n; i++) {
         cin >> a[i];
      }
      while (q--) {

         int l, r;
         cin >> l >> r;

         // gcd function --> log(n)
         int gc = 0;
         for (int i = 1; i <= l - 1; i++) {
            gc = __gcd(gc, a[i]);
         }
         for (int i = r + 1; i <= n; i++) {
            gc = __gcd(gc, a[i]);
         }

         cout << gc << '\n';
      }

      return 0;
   }
}
