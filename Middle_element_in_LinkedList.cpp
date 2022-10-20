#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int b[n];
   for(int i=0;i<n;i++)
   {
    a[i] = b[n-i-1];
   }
   for(int i=0;i<n;i++)
   {
    cout<<b[i];
   }
}