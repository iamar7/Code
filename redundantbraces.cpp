#include<bits/stdc++.h>
using namespace std;
int cal(string s)
{
	int n = s.length();
	stack<char> ls;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=')')
		{
			ls.push(s[i]);
		}
		else
		{
			int count=0;
			while(ls.top() != '(')
			{
				count++;
				ls.pop();
			}
			if(count<=1)
				return 1;
			ls.pop();
		}
	}
	return 0;
}
int main()
{
	string s;
	cin >> s;
	int ans=cal(s);
	printf("%d\n",ans);
	return 0;
}