#include<bits/stdc++.h>
using namespace std;
long long int a[20000],sumi[20000];
int main()
{
	int t;
	long long int n,s,i;
	cin>>t;
	while(t)
	{
		cin>>n>>s;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		sumi[0]=0;
		for(i=1;i<n;i++)
		sumi[i]=sumi[i-1]+a[i-1];
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i-1]);
			else
			{
				if((sumi[i]+(a[i]*(n-i)))==s)
				break;
			}
		}
		if(i==n)
		cout<<"-1"<<endl;
		else
		cout<<a[i]<<endl;
		t--;
	}
	return 0;
}
