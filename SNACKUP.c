#include<stdio.h>
int main()
{
	int t,n,round,i,a,b;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&n);
		printf("%d\n",n);
		for(round=0;round<n;round++)
		{
			printf("%d\n",n);
			for(i=1;i<=n;i++)
			{
				a=(i+round)%n;
				if(a==0)
				{
					a=n;
					b=1;
				}
				else
				b=a+1;
				printf("%d %d %d\n",i,a,b);
			}
		}
		t--;
	}
	return 0;
}
