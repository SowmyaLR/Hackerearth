/*
Our monk, while taking a stroll in the park, stumped upon a polynomial ( A X2 + B X +C ) lying on the ground. The polynomial was dying! Being considerate, our monk tried to talk and revive the polynomial. The polynomial said: 
I have served my purpose, and shall not live anymore. Please fulfill my dying wish. Find me the least non-negative integer Xo, that shall make my value atleast K i.e., A Xo2 + B Xo + C >= K . 

Help our Monk fulfill the polynomial's dying wish!


Input: 
The first line contains an integer T. T test cases follow. 
Each test case consists of four space-separated integers A, B, C and K. 

Output:
For each test case, output the answer in a new line.

Constraints:
1 ≤ T ≤ 105
1 ≤ A,B,C ≤ 105
1 ≤ K ≤ 1010

Sample Input(Plaintext Link)
 3
3 4 5 6
3 4 5 5
3 4 5 150
Sample Output(Plaintext Link)
 1
0
7
*/


#include<iostream>
using namespace std;
#define ll long long
long long validate(ll a[],ll k)
{

ll i,sum;
for(i=0;i<=k;i++)
{
sum = (a[0]*i*i)+(a[1]*i)+a[2];
if(sum>=k){
return i;
}

}
return 0;
}
int main()
{
long long t,a[3],k,i;
cin>>t;
while(t--)
{
	for(i=0;i<3;i++)
	cin>>a[i];
	cin>>k;
	//cout<<"k : "<<k<<endl;
	//for(i=0;i<3;i++)
	//cout<<a[i]<<" ";
	long long val = validate(a,k);
	cout<<val<<endl;
	}
	return 0;
	}
