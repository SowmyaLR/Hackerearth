#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> g;
vector<int> b;
int t,m,n,i,j,k,bc;
cin>>t;
while(t--)
{
	bc=0;
	cin>>m>>n;
	for(i=0;i<m;i++){
	cin>>k;
	b.push_back(k);
	}

	for(i=0;i<n;i++){
	cin>>k;
	g.push_back(k);
	}

	sort(b.begin(),b.end());
	sort(g.begin(),g.end());

	for(i=0;i<m;i++){

	for(j=0;j<n;j++){
	if(b[i]>g[j]&&b[i]!=0&&g[j]!=0){
	bc++;
	b[i]=0;
	g[j]=0;
					}
	if(b[i]==0||g[j]==0)
	continue;
			}
			}

	if(bc==m)
	cout<<"YES\n";
	else
	cout<<"NO\n";

}
return 0;
}
