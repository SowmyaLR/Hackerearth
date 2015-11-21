#include <iostream>
using namespace std;
int trail(int n)
{
	int count=0,i;
	for(i=5;n/i>=1;i*=5)
	count+=n/i;
	return count;
}

int main()
{
    int n;
    
    	cin>>n;
    	cout<<trail(n)<<endl;
    
    return 0;
}
