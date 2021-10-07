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
        ll c=0;
        ll d=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2){
                c++;
            }
            else{
                d++;
            }
        
        }
        if(d%2==1){
            cout<<"NO"<<endl;
        }
        else if(c%2==0 ||(c%2==1 && d>1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}