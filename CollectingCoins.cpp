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
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxi=max(a,max(b,c));
        n=n-(maxi-a)-(maxi-b)-(maxi-c);
        if(n<0){
            cout<<"NO"<<endl;
        }
        else if(n==0){
            cout<<"YES"<<endl;
        }
        else if(n%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}