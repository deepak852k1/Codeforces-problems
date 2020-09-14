#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  for(int i=0;i<k;i++)
  {
    if(n%2==0 && n>2)
       {
         n/=10;

       }
    else
    {
      n--;
    }
  }
  cout<<n;
}
