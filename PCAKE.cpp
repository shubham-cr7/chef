#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int t;
	long long int n,ans,i,j,count;
	cin>>t;
	while(t)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]!=1)
			break;
		}
		if(i==n)
		{
			if(n%2==0)
			{
				ans=n/2;
				ans=ans*(n+1);
			}
			else
			{
				ans=(n+1)/2;
				ans=ans*n;
			}
		}
		else
		{
		ans=n;
		for(i=0;i<(n-1);i++)
		{
			j=i+1;
			count=0;
			if(a[i]==1)
			{
				while(j<n)
				{
					if(a[j]==1)
					{
						j++;
						ans++;	
					}
					else
					{
						if(count==0)
						{
							ans++;
							count=1;
							j++;
						}
						else
						break;
					}
				}
			}
			else
			{
				while((j<n)&&(a[j]==1))
				{
					j++;
					ans++;
				}
			}
		}
	}
		cout<<ans<<endl;
		t--;
	}
	return 0;
}
