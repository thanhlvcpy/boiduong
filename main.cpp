#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000][1000];
int p[100000];
int thc[10000];
void tong()
{
    int th[10000];
    for (int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        th[i] += a[i][j];
    int tc[10000];
    for (int j=1;j<=n;j++)
        for(int i=1;i<=n;i++)
        tc[i] += a[i][j];
    for (int i=1;i<=n;i++)
        thc[i] = th[i] +tc[i];
}
void process()
{
    int vt;
    bool t[100000];
    memset(p,-1,sizeof(p));
    memset(t,true,sizeof(t));
    for (int k=1;k<=n/2;k++)
    {
        int maxp=-99999;
        for(int i=1;i<=n;i++)
    {
        if(t[i]==true)
            if(thc[i]>maxp)
        {
            maxp=thc[i];
            vt=i;
        }
        t[vt]=false;
        p[vt]=1;
        maxp =0;
        if(t[i]==true)
            if(thc[i]>maxp)
            {
                maxp=thc[i];
                vt=i;
            }
        t[vt]=false;
        p[vt]=0;
    }
    }
}
int main()
{
    freopen("Matrix.inp","r",stdin);
    freopen("Matrix.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cin>>a[i][j];
    tong();
    process();
    int an=0,ha=0;
    for (int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(p[i]==1&&p[j]==1) an = an+ a[i][j];
            if(p[i]==0&&p[j]==0) ha = ha+ a[i][j];
        }
    cout<<an<<endl;
    cout<<ha;
    return 0;
}
