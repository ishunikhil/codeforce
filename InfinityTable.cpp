#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,row,col,mid;
   
    while (t>0){
        int r=1;
        int c=0;
        int z=0;
        int y=0;
        int p=0;
        int k=0;
        int dec=0;
        int l=0;
        int s=0;
        cin>>n;
        for(int i=1;i<=n;i=2*z-1){
            
            s=s+i;
            //cout<<s<<endl;
            k=i;
            if(s<=n){
                c++;
            }
            else{
                break;
            }
            z++;
        }
        for(int j = 1; j <=n; j=2*y+1)
        {
            p=p+j;
            l=j;
            if(p<=n){
                r++;
            }
            else{
                break;
            }
            y++;
        }
        s=s-k;
        mid=(s+p)/2;
        if(n==2){
            row=1;
            col=2;
        }
        else if(n==4){
            row=2;
            col=1;
        }
        else if(n==s){
            row=1;
            col=c;
        }
        else if((n+l)==p){
            col=1;
            row=r-1;
        }
        else if(n==mid){
            row=r;
            col=c;
        }
        else if (n>mid)
        {
            row=r;
            dec=n-mid;
            col=c-dec;
        }
        else{
            col=c;
            dec=mid-n;
            row=r-dec;
        }
      
        
        cout<<row<<" "<<col<<endl;
        
        t--;
    }
    return 0;
}