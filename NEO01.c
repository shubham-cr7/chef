#include<stdio.h>
long long int happy[100000],b[100000];
void merging(long long int ,long long int ,long long int );
void soort(long long int ,long long int );
int main()
{
	int t;
	long long int n,sum,i,next,nott,ans,j;
	scanf("%d",&t);
	while(t)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&happy[i]);
		soort(0,n-1);
		sum=happy[0];
		for(i=1;i<n;i++)
		{
			next=(sum+happy[i])*(i+1);
			nott=(sum*i)+happy[i];
			if(next>nott)
			sum=sum+happy[i];
			else
			{
				ans=nott;
				break;
			}
		}
		if(i==n)
		ans=sum*n;
		else
		{
			for(j=i+1;j<n;j++)
			ans=ans+happy[j];
		}
		printf("%lld\n",ans);
		t--;
	}
	return 0;
}
void merging(long long int low,long long int mid,long long int high)
{
	long long int l1,l2,i;
	for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++) 
	{
        if(happy[l1]>=happy[l2])
        b[i]=happy[l1++];
        else
        b[i]=happy[l2++];
    }
    while(l1<=mid)    
    b[i++]=happy[l1++];
    while(l2<=high)   
    b[i++]=happy[l2++];
    for(i=low;i<=high;i++)
    happy[i]=b[i];
}
void soort(long long int low,long long int high) 
{
    long long int mid;
    if(low<high) 
	{
      mid=(low+high)/2;
      soort(low,mid);
      soort(mid+1,high);
      merging(low,mid,high);
    } 
	else 
	{ 
      return;
    }   
}

