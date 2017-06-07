#include<stdio.h>
int arr[100000001];
int main()
{
	long int x,y,xi,yi,r,i,j;
	int m,max;
	scanf("%ld %ld",&x,&y);
	while(x!=-1)
	{
		scanf("%d",&m);
		for(i=1;i<=y;i++)
		arr[i]=0;
		for(i=0;i<m;i++)
		{
			scanf("%ld %ld %ld",&xi,&yi,&r);
			arr[yi]++;
			j=yi+1;
			while((j<=y)&&(j<=(yi+r)))
			{
				arr[j]++;
				j++;
		    }
			j=yi-1;
			while((j>=1)&&(j>=(yi-r)))
			{
				arr[j]++;
				j--;
		    }			
		}
		max=arr[1];
		for(i=2;i<=y;i++)
		{
			if(arr[i]>max)
			max=arr[i];
		}
		printf("%d\n",max);
		scanf("%ld %ld",&x,&y);
	}
	return 0;
}
