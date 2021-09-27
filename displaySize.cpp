#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,aa,bb,i;
    while(cin>>n)
    {
        aa=n;
        bb=1;
       for(i=1;i<=n;i++)
       {
           if(n%i==0)
           {
               a=n/i;
               b=i;
               if(a<b)
                break;
           }
           if(aa-bb>a-b)
           {
               bb=b;
               aa=a;
           }
       }
       cout<<bb<<" "<<aa<<endl;
    }
    return 0;
}
