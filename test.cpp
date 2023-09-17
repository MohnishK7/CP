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
const int N = 1e5 + 10;

// long long fact[N];

/* Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

// pre-compute to store all fact

// void precomp() {
//    fact[0] = fact[1] = 1;
//    for (int i = 2; i < N; i++) {
//       fact[i] = fact[i - 1] * i;
//    }
// }

// void solve() {
//    // code




// }
int a[N];
int pref[N];

int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   // precomp();

// normal way to calculate the sum of numbers in given range in an array
   // O(Q*N) = 10 ^ 10 -> worst time complex
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      cin >> a[i];
      //prefix sum
      pref[i] = pref[i - 1] + a[i]; // prefix sum ka array to calculate
   }

   int t;
   cin >> t;
   while (t--) {
      int l, r;
      cin >> l >> r;
      // long long sum = 0;
      // for (int i = l; i <= r; i++) {
      //    sum += a[i];
      // }
      // cout << sum << '\n';
      cout << pref[r] - pref[l - 1] << '\n'; // O(N) + O(Q) = 10 ^ 5
   }
   return 0;
}

