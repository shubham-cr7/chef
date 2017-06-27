#include<stdio.h>
int main()
{
	long long int t,n,a,b;
	scanf("%lld",&t); 
	while(t)
	{
		scanf("%lld %lld %lld",&a,&b,&n);
		if(n%2==0);
		else
		a=a*2;
		if(a>b)
		printf("%lld\n",a/b);
		else if(a<b)
		printf("%lld\n",b/a);
		else
		printf("1\n");
		t--;
	}
	return 0;
}
