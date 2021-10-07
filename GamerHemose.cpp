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
    while(t>0){
        ll n,H;
        cin>>n>>H;
        ll wepdam[n];
        ll ans=1;
        for(ll i=0;i<n;i++){
            cin>>wepdam[i];
        } 
        sort(wepdam,wepdam+n);
        int wep1=wepdam[n-1];
        int wep2=wepdam[n-2];
        for(int i=1;i>0;i++){

            if(i%2!=0){
                H=H-wep1;
                
            }
            else{
                H=H-wep2;
                
            }
            if(H<=0){
                break;
            }
            else{
                ans++;
            }
            
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}