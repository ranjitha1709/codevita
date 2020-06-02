#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
         long int n;
        cin>>n;
         long int a[n],b[n];
        for(int i=0;i<n;i++)
        {
         cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
         long int r=a[n-1]-a[0];
         long int m=b[n-1]-b[0];
        r=max(r,m);
        cout<<r*r<<endl;
    }
}
