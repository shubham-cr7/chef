#include<iostream>
using namespace std;
char fun(long long int );
int main()
{
	int t;
	long long int k;
	char a;
	cin>>t;
	while(t)
	{
		cin>>k;
		a=fun(k);
		cout<<a<<endl;
		t--;
	}
	return 0;
}
char fun(long long int i)
{
	char x;
	unsigned long long int p=1;
	if(i&&!(i&(i-1)))
    return 'a';
	else
	{
        while(p<i) 
        p<<=1;
		x=fun(p-i);
		if(x=='a')
		return 'c';
		else
		return 'a';
	}
}
