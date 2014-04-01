#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;
struct rks{
	int start;
	int end;
};
bool cmp(struct rks a,struct rks b){
	if(a.end>b.end)	return 1;
	if(a.end==b.end){
		if(a.start<b.start)	return 1;
	}
	return 0;
}
int fun(int b[],int t)
{for(int i=0;i<10001;i++)
{ if(b[i]==t)
{ return i;
 break;}
}
}
int main()
{
    int n;
  struct rks m[1001];
  int a[1001],b[1001],c;
   cin>>n>>c;
   for(int i=0;i<n;i++)
   { cin>>a[i];
   }
for(int i=n-1;i>=0;i--)
   { 
   b[i]=a[i];}
   sort(a,a+n);
  int indx=0;
  int  count=0;
   int k=0;
   int i=0;
   while(i<n)
   { while(a[indx]==a[i])
   {count++;
   i++;}
   m[k].start=fun(b,a[indx]);
   m[k].end=count;
   k++;
   count=0;
   indx=i;
   }
 sort(m,m+k,cmp);
for(int i=0;i<=k;i++)
{
        while(m[i].end --)
        {cout<<b[m[i].start]<<" ";}
        }     
    system("pause");
    return 0;
}

