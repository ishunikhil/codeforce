#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=0;
    int left=0;
    for(int i=1;i>0;i++){
        if(a==0 && left<b){
            break;
            //cout<<"1"<<endl;
        }
        c+=a;
        if(a%b==0){
            a=a/b;
            //cout<<"2"<<endl;
        }
        else{
            left+=a%b;
            a=a/b;
            //cout<<"3"<<endl;
        }
        if(left>=b){
            a=a+1;
            left=left%b;
            //cout<<"4"<<endl;
        }

    }
    cout<<c;
    
    return 0;
}