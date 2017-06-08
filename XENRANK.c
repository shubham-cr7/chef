#include<stdio.h>
int main()
{
	long long int t,x,y,ans,z,a;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld %lld",&x,&y);
		z=x+y;
		a=z+1;
		if(z%2==0)
		z=z/2;
		else
		a=a/2;
		ans=z*a;
		ans=ans+x+1;
		printf("%lld\n",ans);
		t--;
	}
	return 0;
}
