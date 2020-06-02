#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int t;
        cin>>t;
        long s=0;
        long ans=-1;
            for (int j=0;j<n;j++)
            {
                s+=a[j];
                if(s>=t)
                {
                    ans=j+1;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    return 0;
}
