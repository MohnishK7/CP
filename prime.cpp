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


   // prime numbers -> 2 is the only even prime number
   // prime number can be written as 6b+1 or 6n-1 , n is the natural number
   // , except 2 and 3
   /*
   goldbach conjection -> every even int greater than 2 can be expressed
   as the sum of two prime numbers

   ex. 10 = 3 + 7

   2 and 3 are only prime that are consecutive.


   wilson's theorem -> (p-1)! = (p-1) % p
   ex: p = 5 (prime number)
   (5-1)! = (4) % 5 = 4

   // check if the number is prime or not
   // it must be divisible by 1 and itself and must have exactly 2 factors
   // tc -> O(N)

   //better optimization -> O(sqr(N) * logN) -> use sqt(n)

   // print the sum of factor -> if(n(i) != i) sum += (n/i)

   // codeforces - 1294c

   */

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;

      int a = n, b = n, c = n;

      for (int i = 2; i * i <= n; i++)
      {
         if (n % i == 0)
         {
            a = i;
            break;
         }
      }
      n = n / a;

      for (int i = 2; i * i <= n; i++)
      {
         if (n % i == 0 && i != a)
         {
            b = min(b, i);

         }
      }

      c = n / b;

      if (a != b && b != c && c > 1)
      {
         cout << "YES" << endl;
         cout << a << " " << b << " " << c << " " << endl;
      }

      else
      {
         cout << "NO" << endl;
      }
   }
}















