#include <bits/stdc++.h>
using namespace std;
#define ff(a, c)     for (int(a) = 0; (a) < (c); (a)++)
#define w(x)            int x; cin >> x; while(x--)
int32_t main() {
   w(t) {
      int n;
      cin >> n;
      string s;
      cin >> s;
      int a = 0, b = 0;
      ff(i, n) {
        
         if (s[i] == 'a') a++;
         else b++;
      }
      if (a == 0 or b == 0) cout << "-1" << " " << "-1" << endl;
      else {
         ff(i, n - 1) {
            if (s[i] == 'a' and s[i + 1] == 'b') {
               cout << i + 1 << " " << i + 2 << endl;
               break;
            }
            else if (s[i] == 'b' and s[i + 1] == 'a') {
               cout << i + 1 << " " << i + 2 << endl;
               break;
            }
         }
      }
   }
}