#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
  int t,n,a[25],ans;
  cin>>t;
  while(t--)
  { cin>>n;
 if(n==0)
 { printf("10\n");}
 else if(n<10)
 {printf("%d\n",n);}
 else{
 int k=0;
while(n>1)
{  int i;
  for(i=9;i>1;i--){ 
          if(n%i==0)
       { a[k]=i;
       k++;
       n=n/i;
       break;}
       }
       if(i==1){
       k=0;
       break;}
       } 
       if(k>0){
       for(int i=k-1;i>=0;i--){
       printf("%d",a[i]);}
       cout<<"\n";
       }
       else
       {printf("-1\n");}
       }
       }
       system("pause");
       return 0;
       }
        
  

