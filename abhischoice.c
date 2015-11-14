#include <stdio.h>
 
int count_one (int n)
    {
    	int count=0;
        while( n )
        {
        n = n&(n-1);
           count++;
        }
        return count;
}
 
int main()
{
   int t,n,k,a[1000],b[1000],i,sum,j;
   scanf("%d",&t);
   while(t!=0)
   {
   	sum=0;
   	scanf("%d%d",&n,&k);
   	for(i=0;i<n;i++){
   	scanf("%d",&a[i]);
   	b[i] = count_one(a[i]);
   	}
   	
   	for(i=0;i<n;i++)
   	{
   		for(j=i+1;j<n;j++)
   		{
   			if(b[i]<b[j])
   			{
   				b[j]^=b[i];
   				b[i]^=b[j];
   				b[j]^=b[i];
   			}
   		}
   	}
   	for(i=0;i<k;i++)
   	sum+=b[i];
   	printf("%d\n",sum);
   	t--;
   	
   }
}
