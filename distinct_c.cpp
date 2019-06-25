#include<bits/stdc++.h>

using namespace std;

int findPrimes(int n)
{	
	int count=0;
	bool prime[n+1]; 
	memset(prime,true,sizeof(prime));
	
	for(int i=2;i*i<=n;i++) //useful multiples
	{
		if(prime[i]==true)  
		{
			
			for(int j=i*i;j<=n;j+=i) //useful multiples
			{
				prime[j]=false;
			}
		
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		count++;
	}
	return count;
}

int main()
{
	int n,count;
	cin>>n;
	count=findPrimes(n);
	
	cout<<count*(count+1)/2;
	
	return 0;
}
