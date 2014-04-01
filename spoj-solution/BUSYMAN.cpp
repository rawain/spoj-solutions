#include<iostream>
#include<cstdlib>
#include <algorithm>
using namespace std;

    struct busy{
	int start;
	int end;
};
bool cmp(struct busy a,struct busy b){
	if(a.end<b.end)	return 1;
	if(a.end==b.end){
		if(a.start<b.start)	return 1;
	}
	return 0;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
    cin>>n;
   int res=0,prev;
    struct busy m[n+1];
     for(int i=0;i<n;i++)
    { 
             cin>>m[i].start;
             cin>>m[i].end;
             }
     sort(m,m+n,cmp);
     prev=m[0].end;
     for(int i=1;i<n;i++)
     { if(prev<=m[i].start)
     { 
       prev=m[i].end;
       res++;
       }
       }
       cout<<res+1<<endl;
       }
       system("pause");
       return 0;
       }
     
    
    

