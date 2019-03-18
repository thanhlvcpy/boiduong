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
    long long d=0;
    for(int i=1;i<=n;i++)
    {
        if (b <cow[i].p) break;
        long long tmp = b / cow[i].p;
        b =b - min(tmp,cow[i].c) * cow[i].p;
		d =d + min(tmp,cow[i].c);
    }
    cout<<d;
    return 0;
}
