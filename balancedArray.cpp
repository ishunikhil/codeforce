#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        if((n/2)%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int j=1;j<=n-3;j+=2){
                cout<<j<<" ";
                c=j;
            }
            cout<<c+2+n/2<<endl;
        }
    }
    return 0;
    }