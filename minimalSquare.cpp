#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b;
        cin>>a>>b;
		if(a>b)swap(a,b);
		cout<<(max(a+a,b))*(max(a+a,b))<<endl;
        t--;
    }
    return 0;
}