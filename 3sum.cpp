#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> a, int tar)
{
	int i,j,k,n=a.size();
	sort(a.begin(),a.end());
	if(n<3)
	{
		return 0;
	}
	int ans=a[0]+a[1]+a[2];
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=n-1;k>j;k--)
			{
				int sum=a[i]+a[j]+a[k];
				if(abs(tar-sum)<abs(tar-ans))
				{
					ans=sum;
				}
			}
		}
	}
	return ans;

}
int main()
{
	vector<int> a;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int mt;
		scanf("%d",&mt);
		a.push_back(mt);
	}
	int tar;
	scanf("%d",&tar);
	int ans=sum(a,tar);
	printf("%d\n",ans);
	return 0;
}