#include<stdio.h>
long long int t,n,i,ndiff,pdiff,diff;
int main()
{
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld",&n);
		for(i=1;i<n;i=i*2)
		;
		ndiff=i-n;
		pdiff=n-(i/2);
		if(ndiff<pdiff)
		diff=ndiff;
		else
		diff=pdiff;
		printf("%lld\n",diff);
		t--;
	}
	return 0;
}
