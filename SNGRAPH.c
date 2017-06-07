#include<stdio.h>
long int deg[100001];
long int ed[200000][5];
long int d[100000];
long int a[100001];
int main()
{
	int t;
	long int n,m,i,x,y,no,j,temp,count,p,q;
	scanf("%d",&t);
	while(t)
	{
		scanf("%ld %ld",&n,&m);
		for(i=1;i<=n;i++)
		a[i]=i;
		for(i=0;i<m;i++)
		{
			scanf("%ld %ld",&ed[i][0],&ed[i][1]);
			p=ed[i][0];
			q=ed[i][1];
			while(1)
			{
				if(a[p]==p)
				{
					a[p]=a[q];
					break;
				}
				else
				{
					temp=a[p];
					a[p]=a[q];
					p=temp;
				}
			}
		}
		count=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]==i)
			count++;
		}
		for(i=1;i<=n;i++)
		deg[i]=0;
		for(i=0;i<m;i++)
		{
			x=ed[i][0];
			y=ed[i][1];
			deg[x]++;
			deg[y]++;
		}
		for(i=0;i<m;i++)
		{
			x=ed[i][0];
			y=ed[i][1];
			ed[i][2]=deg[x];
			ed[i][3]=deg[y];
		}
		for(i=0;i<m;i++)
		ed[i][4]=0;
		d[0]=count-1;
		for(i=1;i<n;i++)
		{
			no=0;
			for(j=0;j<m;j++)
			{
				if(ed[j][4]==0)
				{
					if((ed[j][2]==i)||(ed[j][3]==i))
					{
						no++;
						ed[j][4]=1;
					}
				}
			}
			d[i]=d[i-1]+no;
		}
		for(i=0;i<n;i++)
		printf("%ld ",d[i]);
		t--;
	}
	return 0;
}
