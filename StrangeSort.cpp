#include <bits/stdc++.h>
using namespace std;

void odd(int length,int a[]);
void even(int length,int a[]);

int main(){
    int t;
    cin>>t;
    int length;
    int ans=0;
    while(t>0){
        cin>>length;
        int arr[length];
        for(int i=0;i<length;i++){
            cin>>arr[i];
        }
        if (! is_sorted(arr,arr+length))
        {
            ans=ans+1;
           for(int j=1;j<=length;j++){
                if(j%2==0){
                    even(length,arr);
                }
                else{
                    odd(length,arr);
                }
           }
            cout<<ans<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        
        t--;
    }
    return 0;
}
 void even(int length,int a[]){
    for(int i=2;i<length;i+=2){
        if(a[i]>a[i+1]){
            int temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
             }
         }
    }
void odd(int length,int a[]){
    for(int i=1;i<length;i+=2){
        if(a[i]>a[i+1]){
            int temp=a[i];
             a[i]=a[i+1];
            a[i+1]=temp;
        }
     }
 }
