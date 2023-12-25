#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*--------------------------------------------------------------------------------------------------------------------------------------*/


bool is_prime(int n) {
   if (n == 1) return false;
   for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}


int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
   //error
   freopen("error.txt", "w", stderr);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   // code here
   int n, k;
   cin >> n >> k;
   vector<int> v;
   for (int i = 2; i <= n; i++) {
      bool flag = true;
      for (int j = 2; j * j <= i; j++) {
         if (i % j == 0) {
            flag = false;
         }
      }
      if (flag) {
         v.push_back(i);
      }
   }
   // for (auto i : v) {
   //    cout << i << " ";
   // }
   int ans = 0;
   for (int i = 0; i < v.size() - 1; i++) {
      int num = 1 + v[i] + v[i + 1];
      if (is_prime(num) && num <= n) {
         ans++;
      }
   }
   if (ans >= k) {
      cout << "YES";
   }
   else {
      cout << "NO";
   }
}
