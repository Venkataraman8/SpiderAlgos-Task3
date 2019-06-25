#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	long long sum=0,count=0;
	cin>>str;
	
	
	while(str.length()>1)
	{
		sum=0;
		for(int i=0;i<str.length();i++)
		{
			sum+=str[i]-'0'; 
		}
		str = to_string(sum); //sum of digits is now the new string
		count++;
	}
	
	cout<<count;
}
