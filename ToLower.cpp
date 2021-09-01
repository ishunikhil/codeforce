#include <bits/stdc++.h>
using namespace std;

int main(){
    string sl;
    cin>>sl;
    int l=sl.length();
    char arr[l+1];
    int c=0;
    int p=0;
    strcpy(arr,sl.c_str());
    for(int i=0;i<l;i++){
        if(isupper(arr[i])){
            c++;   
        }
        else{
            p++;   
        }
    }
    if(c>p){
        transform(sl.begin(), sl.end(), sl.begin(), ::toupper);
        cout << sl << endl;
    }
    else{
        transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
        cout << sl << endl;
    }
    return 0;
}