#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            a++;
        }
        else if(arr[i]==2){
            b++;
        }
        else if(arr[i]==3){
            c++;
        }
        else{
            d++;
        }
    }
    count+=d;
    if(c>a){
        count+=a;
        c=c-a;
        a=0;
    }
    else if(a>c){
        count+=c;
        a=a-c;
        c=0;
    }
    else{
        count+=c;
        c=0;
        a=0;
    }
    if(c>0){
        count+=c;
        c=0;
    }
    if(b>0){
        count+=b/2;
        b=b%2;
    }
   int left=a+(b*2);
   if(left<=4 && left>0){
       count+=1;
   }
   else if(left%4!=0){
       count+=(left/4)+1;
   }
   else{
       count+=left/4;
   }
   cout<<count;
   
    return 0;
}