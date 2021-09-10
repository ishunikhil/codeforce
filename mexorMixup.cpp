#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
int ar[N]; 
class Test{
 public:
 int solve(){
    int a, b; 
    cin >> a >> b;
    int x = ar[a];
    
    if (x == b)cout << a << endl;
    else if ((x ^ b) == a)
    cout << a + 2 << endl;
    else cout << a + 1 << endl;
 }
};
int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    Test tt;
    for (int i = 1; i < N; i++) {
    ar[i] = ar[i - 1] ^ (i - 1);
    }
    
    int t;
    cin >> t;
    while(t--){
    tt.solve();
    }
    
    
    return 0;
}