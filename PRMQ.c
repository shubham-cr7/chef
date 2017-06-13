#include<stdio.h>
#include<math.h>
long long int arr[100001][30];
int main()
{
	long long int n,q,j,k,x,y,l,r,count,result,index,temp,i;
	scanf("%lld",&n);
	for(j=1;j<=n;j++)
	scanf("%lld",&arr[j][0]);
	for(j=1;j<=n;j++)
	{
		count=0;
		index=2;
		temp=arr[j][0];
		while(temp%2==0)
		{
			arr[j][index]=2;
			index++;
			count++;
			temp=temp/2;
		}
		for(i=3;i<=sqrt(temp);i=i+2)
		{
			while(temp%i==0)
			{
				arr[j][index]=i;
				index++;
				count++;
				temp=temp/i;
			}
		}
		if(temp>2)
		{
			arr[j][index]=temp;
			count++;
		}
		arr[j][1]=count;
	}
	scanf("%lld",&q);
	while(q)
	{
		scanf("%lld %lld %lld %lld",&l,&r,&x,&y);
		result=0;
		for(j=l;j<=r;j++)
		{
			for(k=2;k<=(arr[j][1]+1);k++)
			{
				if((arr[j][k]<=y)&&(arr[j][k]>=x))
				result++;
			}
		}
		printf("%lld\n",result);
		q--;
	}
	return 0;
}
