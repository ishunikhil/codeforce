#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    if(a==b && b==c && c==d){
        ans=3;
    }
    else if((a!=b && a!=c && a!=d)&&(b!=a && b!=c && b!=d)&&(c!=a && c!=b && c!=d)&&(d!=a && d!=c && d!=b) ){
        ans=0;
    }
    else if(a==b && c==d && b!=c){
        ans=2;
    }
    else if((a==b && b==c) || (a==c && c==d) || (a==b && b==d) || (b==c && c==d)){
        ans=2;
    }
    else{
        ans=1;
    }
    cout<<ans;
    return 0;
}