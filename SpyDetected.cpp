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
        int key;
        int ans;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==arr[1]){
            key=arr[0];
        }
        else if(arr[0]==arr[2]){
            key=arr[0];
        }
        else{
            key=arr[1];
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=key){
                ans=i;
            }
        }
        cout<<ans+1<<endl;
        
        t--;
    }
    return 0;
}