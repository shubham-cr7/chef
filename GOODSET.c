#include<stdio.h>
int a[100];
int main()
{
	int t,n,i,k;
	k=401;
	for(i=0;i<100;i++)
	{
		a[i]=k;
		k++;
	}
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");
		t--;
	}
	return 0;
}
