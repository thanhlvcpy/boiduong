#include <bits/stdc++.h>

using namespace std;
struct socola
{
    long long p,c;
};
bool cmp(socola a,socola b)
{
    if(a.p<b.p)
        return true;
    else return false;
}
int main()
{
    //freopen("socola.inp","r",stdin);
    //freopen("socola.out","w",stdout);
    socola cow[100000];
    long long n,b;
    cin>>n>>b;
    for(long long i=1;i<=n;i++)
        cin>>cow[i].p>>cow[i].c;
    sort(cow+1,cow+n+1,cmp);
    long long t=0;
    long long d=0;
    long long id;
    for(int i=1;i<=n;i++)
    {
        t=t+cow[i].p*cow[i].c;
        d=d+cow[i].c;
        id=i;
        if(t>=b)
            break;
    }
    while(t>b)
    {
        t=t-cow[id].p;
        d--;
    }
    cout<<d;
    return 0;
}
