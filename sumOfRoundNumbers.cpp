#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        int p=1;
        int l=s.length();
        int arr[l];
        for(int i=l-1;i>=0;i--){
            if(s[i]!='0'){
                arr[c]=(s[i]-'0')*p;
                c++;
            }
            p=p*10;
        }
        cout<<c<<endl;
        if(c>1){
            for(int i=0;i<c;i++){
                cout<<arr[i]<<" ";
            }
        }
        else{
            cout<<arr[c-1];
        }
        cout<<endl;

    }
    return 0;
}