#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int m;
    int c;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
       cin>>m>>c;
       if(m==c){
           a++;
           b++;
        }
        else if(m>c){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"Mishka";
    }
    else if(b>a){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
