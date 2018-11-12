#include <bits/stdc++.h>

using namespace std;
int n,k,c[100000];
void sapxep(){
    for(int i=1;i<=n-1;i++)
        for(int j=i+1;j<=n;j++)
            if(c[i]<c[j])
                swap(c[i],c[j]);
}
int main(){
    freopen("greedy.inp","r",stdin);
    freopen("greedy.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>c[i];
    sapxep();
    int s=0;
    int k1;
    if(k<=n)
        k1=k;
    else
        k1=n;
    for(int i=1;i<k1;i++)
        s=s+c[i];
    int d=1;
    for(int i=k1;i<=n;i++){
        s=s+c[i]*d;
        d++;
    }
    cout<<s;
    return 0;
}
