#include<stdio.h>
int main()
{
	long long int t,a,b,m,i,j,r,ans;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld %lld %lld",&a,&b,&m);
		if(m>a)
		i=m;
		else
		{
			if(a%m==0)
			i=a;
			else
			{
				r=a/m;
				i=(r+1)*m;
			}
		}
		if(m>b)
		j=0;
		else
		{
			r=b/m;
			j=r*m;
		}
		if(j<i)
		ans=0;
		else
		{
			ans=(j-i)/m;
			ans++;
		}
		printf("%lld\n",ans);
		t--;
	}
	return 0;
}
