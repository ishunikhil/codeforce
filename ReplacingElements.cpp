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
        int n,d;
        cin>>n>>d;
        int arr[n];
        string ans;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[n-1]<=d){
            ans="YES";
            
        }
        else{
            if(arr[0]+arr[1]<=d){
                ans="YES";
            }
            else{
                ans="NO";
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}