#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,strength[100000];
	
	cin>>n;
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>strength[i];
	
	sort(strength,strength+m);
	
	for(int i=0;i<m-n;i++)
	{
		strength[i]+=strength[m-1-i];
		strength[m-1-i]=0;
	}
	
	int small=strength[0];
	
	for(int i=0;i<n;i++)
	{
		if(strength[i]<small)
		small=strength[i];
	}
	cout<<small;
}
