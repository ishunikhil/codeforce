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
        int n;
        cin>>n;
        int arr[n];
        int ans[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int r,l;
        l=1;
        r=n;
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                ans[l]=arr[i];
                l++;
            }
            else{
                ans[r]=arr[i];
                r--;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
        t--;
    }
    return 0;
}