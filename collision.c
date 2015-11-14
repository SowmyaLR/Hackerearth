#include <stdio.h>
 
int main()
{
    int t,n,array[1000],i,hashv,hash[1000],val;
    scanf("%d",&t);
    while(t!=0)
    {
    	hashv=0;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&array[i]);
    		hash[i]=-1;
    	}
    	for(i=0;i<n;i++)
    	{
    		val = array[i]%10;
		//printf("val : %d\n",val);
    		if(hash[val-1]==-1){
		//printf("%d ",hash[val]);
    		hash[val-1]=val;}
    		else{
		//printf("%d ",hash[val]);
    		hashv++;}
    	}
    	
    	printf("%d\n",hashv);
    	t--;
    }
}
