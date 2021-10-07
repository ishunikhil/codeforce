#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector <ll>
#define vii vector <int>
#define vpii vector <pii>
#define vpll vector <pll>
#define ff first
#define ss second
#define vvll vector <vll>
#define vvii vector <vii>
#define all(v) v.begin(),v.end()
#define PQ priority_queue
using namespace std;

int main(){
   int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
 
        ll s1 = 0 , s2 = 0;
        while(n%2 == 0)
        {
            s1++;
            n/=2;
        }
        while(n%3 == 0)
        {
            s2++;
            n/=3;
        }
 
        if(n == 1)
        {
            if(s1 <= s2)
            {
                ll ans = min(s1,s2);
                s1-=ans;
                s2-=ans;
                ans += s2*2;
                cout<<ans<<"\n";
            }   
            else{
                cout<<"-1\n";
            }
        }
        else
            cout<<"-1\n";
    }
 
    return 0;
}