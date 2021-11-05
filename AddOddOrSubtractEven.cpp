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
        ll a,b;
        cin>>a>>b;
        int ans;
        if(a==b){
            ans=0;
        }
        else if(a>b){
            if((a%2==0 && b%2==0)||(a%2!=0 && b%2!=0)){
                ans=1;
            }
            else{
                ans=2;
            }
        }
        else{
            if(!((a%2==0 && b%2==0)||(a%2!=0 && b%2!=0))){
                ans=1;
            }
            else{
                ans=2;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}