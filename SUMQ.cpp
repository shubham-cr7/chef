#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
long long int a[100000],b[100000],c[100000],sump[100000],sumr[100000];
inline void scanint(long long int &x)
{
    register long long int c=getchar();
    x=0;
    long long int neg=0;
    for(;((c<48||c>57)&&c!='-');c=getchar());
    if(c=='-') {neg=1;c=getchar();}
    for(;c>47&&c<58;c=getchar()) {x=(x<<1)+(x<<3)+c-48;}
    if(neg)x=-x;
}
void merge(long long int arr[],long long int l,long long int m,long long int r)
{
    long long int i,j,k;
    long long int n1=m-l+1;
    long long int n2=r-m;
    long long int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i = 0;
    j = 0;
    k = l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(long long int arr[],long long int l,long long int r)
{
    if(l<r)
    {
        long long int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
} 
int main()
{
	long long int t,p,q,r,i,j,k,ans,a1,a2,a3,a4,a5,a6,aa,currentj,currentk;
	scanint(t);
	while(t)
	{
		scanint(p);
		scanint(q);
		scanint(r);
		for(i=0;i<p;i++)
		scanint(a[i]);
		for(i=0;i<q;i++)
		scanint(b[i]);
		for(i=0;i<r;i++)
		scanint(c[i]);
		mergeSort(a,0,p-1);
		mergeSort(b,0,q-1);
		mergeSort(c,0,r-1);
		sump[0]=a[0];
		for(i=1;i<p;i++)
		sump[i]=(sump[i-1]+a[i])%mod;
		sumr[0]=c[0];
		for(i=1;i<r;i++)
		sumr[i]=(sumr[i-1]+c[i])%mod;				
		ans=0;
		currentj=0;
		currentk=0;
		for(i=0;i<q;i++)
		{
			for(j=currentj;j<p;j++)
			{
				if(a[j]>b[i])
				break;
			}
			currentj=j;
			a1=(sump[j-1]*b[i])%mod;
			for(k=currentk;k<r;k++)
			{
				if(c[k]>b[i])
				break;
			}
			currentk=k;
			if((j==0)||(k==0))
			aa=0;
			else
			{
			    a2=(sumr[k-1]*b[i])%mod;
			    a1=(a1*k)%mod;
			    a2=(a2*j)%mod;
			    a3=(((((b[i]*b[i])%mod)*j)%mod)*k)%mod;
			    a4=(sump[j-1]*sumr[k-1])%mod;
			    a5=(a1+a2)%mod;
			    a6=(a3+a4)%mod;
			    aa=(a5+a6)%mod;
		    }
			ans=(ans+aa)%mod;
		}
		cout<<ans<<endl;
		t--;
	}
	return 0;
}
