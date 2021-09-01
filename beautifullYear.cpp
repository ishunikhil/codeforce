#include <bits/stdc++.h>
#include <cstring>
using namespace std;

bool distint(int n);

int main()
{
    int n;
    cin>>n;
    int check=n+1;
    for(int i=1;i>0;i++){
        if(distint(check)){
            break;
        }
        else{
            check++;
        }
    }
    cout<<check<<endl;
    return 0;
}
bool distint(int n){
    bool ans;
    int arr[4];
    int c=0;
    for(int i=0;i<4;i++){
        arr[i]=n%10;
        n=n/10;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c>4){
            ans=false;
        }
        else{
            ans=true;
        }

    }
    return ans;

}