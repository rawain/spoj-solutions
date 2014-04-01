#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;
int main()
{
   int n,a[101],sum=0, res;
   cin>>n;
   for(int i=0;i<n;i++)
   {cin>>a[i];
   sum=sum+a[i];}
   if(sum > n*(n-1))
   {cout<<-1<<endl;}
   else
   {
       sort(a,a+n);
   res=sum/(n-1);
   if(a[n-1]>res)
   {cout<<-1<<endl;}
   else
   {cout<<res<<endl;}
   }
   system("pause");
   return 0;
}
   
   
   
   

