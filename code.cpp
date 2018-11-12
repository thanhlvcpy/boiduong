#include <bits/stdc++.h>

using namespace std;
int t,n,a[100000];
int findtime(){
    if(n==1)
        return a[1];
    for(int i=1;i<=n-1;i++)
        for(int j =i+1;j<=n;j++)
            if(a[i]<a[j])
                swap(a[i],a[j]);

    int s=a[1]+a[2];   //tinh thoi gian
    int t=s;
    for(int i=3;i<=n;i++){
         s=s+a[i];
         t=t+s;

    }

    return t;
}
int main(){
    freopen("code.inp","r",stdin);
    freopen("code.out","w",stdout);
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        //chay thuat toan trong nay

        cout<<findtime()<<endl;

    }
    return 0;
}
