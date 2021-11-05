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
        ll n,k;
        cin>>n>>k;
        ll c=0;
        ll p=1;
        while(p<n){
            if(n==1){
                c=0;
                break;
            }
            if(p<=k){
                p=p*2;
                c++;
            }
            else{
                p+=k;
                c++;
            }
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}