#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
        sum=sum+(b[i]-a[i]);
    if(m>n)
    {
        for(int j=n;j<m;j++)
            sum=sum+b[j];
    }
    cout<<sum<<endl;
    return 0;
}
