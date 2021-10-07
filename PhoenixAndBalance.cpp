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
        ll n;
        cin>>n;
        ll box1=0;
        ll box2=0;
        ll ans;
        box1+=pow(2,n);
        for(int i=1;i<n/2;i++){
            box1+=pow(2,i);
        }
        for(int i=n/2;i<n;i++){
            box2+=pow(2,i);
        }
        ans=box1-box2;
        cout<<ans<<endl;
        t--;
    }
    return 0;
}