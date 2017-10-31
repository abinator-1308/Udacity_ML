#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int c,d,l,i,j,t,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&c,&d,&l);
		ans=0;
		if(l==(4*(c+d)))
		ans=1;
		for(j=0;j<=c&&j<=2*d;j++)
		{
			if(l==(4*(d+c-j)))
			ans=1;
		}
		
		if(ans==1)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}
