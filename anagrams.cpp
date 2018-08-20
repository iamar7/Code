#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<string> str;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		str.push_back(s);
	}
	vector < vector <int> > ans;
	unordered_map<string, vector<int> > a;
	for(int i=0;i<n;i++)
	{
		string tmp=str[i];
		sort(tmp.begin(),tmp.end());
		if(a.find(tmp)!=a.end())
		{
			a[tmp].push_back(i+1);
		}
		else 
		{
			a.insert(tmp,i+1);
		}
	}
	for(auto it=a.begin(); it!=a.end();++it)
	{
		ans.push_back(it.second);
	}	

	int k=ans.size();
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			printf("%d,\n", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
