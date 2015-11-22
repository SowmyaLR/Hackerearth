#include <iostream>
#include<algorithm>
using namespace std;
long long a[100005];

bool binarysearch(long long a[],long long l,long long r,long long item)
{
	long long i;
	for(i = l;i<r;i++)
	{
		if(a[i]==item)
		return true;
	}
	
	return false;
}



long long partition ( long long A[],long long start ,long long end) {
    long long i = start + 1;
    long long piv = A[start] ;            
    for(long long j =start + 1; j <= end ; j++ )  {
    
          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;  
   return i-1;  }                   


void quick_sort ( long long A[ ] ,long long start , long long end ) {
   if( start < end ) {
        
         int piv_pos = partition (A,start , end ) ;     
         quick_sort (A,start , piv_pos -1);    
         quick_sort ( A,piv_pos +1 , end) ;
   }
}

int main()
{
	long long n,q,left,right,item,i;
	cin>>n;
	cin>>q;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	quick_sort(a,0,n);
	
	while(q--)
	{
		cin>>item;
		if(binarysearch(a,1,n+1,item))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
