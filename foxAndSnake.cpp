#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2==0){
                if(c%2==0){
                    if(j==1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                else{
                    if(j==m){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
            else{
                cout<<"#";
            }
        }
        if(i%2!=0){
           c++; 
        }
        cout<<endl;
    }
    return 0;
}