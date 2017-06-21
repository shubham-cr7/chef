#include<stdio.h>
#include<string.h>
char st[50];
int main()
{
	int t,n,u,d,i;
	scanf("%d",&t);
	while(t)
	{
		scanf("%s",st);
		n=strlen(st);
		u=0;
		d=0;
		if(st[0]=='U')
		u++;
		else
		d++;
		for(i=1;i<n;i++)
		{
			if(st[i]==st[i-1]);
			else
			{
				if(st[i]=='D')
				d++;
				else
				u++;
			}
		}
		if(d<u)
		printf("%d\n",d);
		else
		printf("%d\n",u);
		t--;
	}
	return 0;
}
