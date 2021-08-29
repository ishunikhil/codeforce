#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,c;
        int diff;
        cin>>a>>b>>c;
        diff=a-b;
        diff=abs(diff);
        if(diff<2){
            cout<<"-1"<<endl;
        }
        else if(a>2*diff){
            cout<<"-1"<<endl;
        }
        else if(b>2*diff){
            cout<<"-1"<<endl;
        }
        else if(c>2*diff){
            cout<<"-1"<<endl;
        }
        else if(c+diff>2*diff){
            cout<<c-diff<<endl;
        }
        else{
            cout<<c+diff<<endl;
        }
        t--;
    }
    return 0;
}
