#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int n,k;
	cin>>n>>k;
	int a[2*n+10],temp[n];
	for(int i=0;i<n;i++)
	{
		cin>>temp[i];
		a[i]=temp[i];
	}
	sort(temp,temp+n);
	for(int i=n;i<2*n;i++)
	{
		a[i]=temp[i-n];
	}
	n=2*n;
	int flag[n],freq[n];
	memset(freq,0,sizeof(freq));
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			flag[i]=0;
		}
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]>a[i])
			{
				flag[i]=-1;
				break;
			}
			if(j==0)
			flag[i]=0;
		}
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			break;
			else
			freq[i]++;
		}
	}
	int mx=INT_MIN,ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(flag[i]!=-1)
		{
			if(freq[i]>=k)
			{
				ans=a[i];
				break;
			}
			else
			{
				if(freq[i]>mx)
				{
					mx=freq[i];
					ans=a[i];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
