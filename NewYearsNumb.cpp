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
        string ans="NO";
        while(n>=0){
            if(n==0 || n%2021==0 || n%2020==0){
                ans="YES";
                break;
            }
            else{
                if(n%10!=0){
                    n=n-2021;
                }
                else{
                    n=n-2020;
                }
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}