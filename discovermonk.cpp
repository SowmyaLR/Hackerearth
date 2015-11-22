/*
You are given an array A of size N, and Q queries to deal with. For each query, you are given an integer X, and you're supposed to find out if X is present in the array A or not.

Input:
The first line contains two integers, N and Q, denoting the size of array A and number of queries. The second line contains N space separated integers, denoting the array of elements Ai. The next Q lines contain a single integer X per line.

Output:
For each query, print YES if the X is in the array, otherwise print NO.

Constraints:
1 <= N, Q <= 105
1 <= Ai <= 109
1 <= X <= 109

Sample Input(Plaintext Link)
 5 10
50 40 30 20 10
10
20
30
40
50
60
70
80
90
100
Sample Output(Plaintext Link)
 YES
YES
YES
YES
YES
NO
NO
NO
NO
NO*/



#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
	long long n,q,a[10005],left,right,item,i;

	cin>>n;
	cin>>q;
	for(i=0;i<n;i++)
	cin>>a[i];
	vector<long>v(a,a+n);
	sort(v.begin(),v.end());
	//sort(a.begin(),a.end());
	while(q--)
	{
		cin>>item;
		if(binary_search(v.begin(),v.end(),item))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
