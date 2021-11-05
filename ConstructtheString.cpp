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
        int n,a,b;
        cin>>n>>a>>b;
        int c=97;
        int l=1;
        for(int i=1;i<=n;i++){
            if(l<b){
                cout<<(char)c;
                l++;
                c++;
            }
            else if(l>=b && l<=a){
                cout<<(char)c;
                l++;
            }
            else{
                l=1;
                c=97;
                i=i-1;
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}