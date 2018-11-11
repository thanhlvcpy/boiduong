#include <bits/stdc++.h>

using namespace std;
int a[10000];
int n,m;
int main(){
    freopen("force.inp","r",stdin);
    freopen("force.out","w",stdout);
    cin>>a[0]>>a[1]>>n>>m;
    n--;
    for(int i=2;i<=n;i++)
       a[i]=(a[i-1]+a[i-2]) % m;
    for(int i=0;i<=n-1;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
   int max1=0;
   for(int i=0;i<=n;i++){
        int d=1;
        for(int j=i+1;j<=n;j++){
            if(a[i]!=a[j]){
                i=j-1;
                break;
            }

            if(a[i]==a[j])
                d++;
        }
        max1=max1+d*d;
    }
    cout<<max1;
    return 0;
}
