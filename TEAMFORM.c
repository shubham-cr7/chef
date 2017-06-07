#include<stdio.h>
int main()
{
	int t,n,m,u,i,v;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d %d",&n,&m);
		for(i=1;i<=m;i++)
		scanf("%d %d",&u,&v);
		if(n%2==0)
		printf("yes\n");
		else
		printf("no\n");
		t--;
	}
	return 0;
}
