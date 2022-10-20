#include <bits/stdc++.h> // Using a c++ library
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i]; // this is the input array take from user
   }
   int b[n]; //  a new array is initialized
   for(int i=0;i<n;i++)
   {
    b[i] =  a[n-i-1]; // this thing starting from last element to the first element of input array feed the reverse in the array b
   }
   for(int i=0;i<n;i++)
   {
    cout<<b[i]; // For output of reverse of array a
   }
}
