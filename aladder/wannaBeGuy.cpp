#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a;
	cin>>a;
	vector<int>b(a);
	for(int i=0;i<a;i++)
	{
		cin>>b[i];
	}
	int c;
	cin>>c;
	vector<int>d(c);
	for(int i=0;i<c;i++)
	{
		cin>>d[i];
	}
	vector<int>e;
	for(int i=0;i<a;i++)
	{
		e.push_back(b[i]);
	}
	for(int i=0;i<c;i++)
	{
		e.push_back(d[i]);
	}
	sort(e.begin(),e.end());
	set<int>s;
	for(int i=0;i<e.size();i++)
	{
		s.insert(e[i]);
	}
	if(s.size()==n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
	return 0;
}
