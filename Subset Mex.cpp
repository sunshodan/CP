#include <bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	unordered_map<int,int> mp;
    	for(int i=0;i<n;i++)
    	{
    		int a;
    		cin>>a;
    		mp[a]++;
    	}
    	int num=0;
    	int flag=0;
    	int i=0,j=0;
    	while(mp.find(num)!=mp.end())
    	{
    		auto it=mp.find(num);
    		if(it->second > 1&&flag==0)
    		{
    			i++;
    			j++;
    		}
    		else
    		{
    			i++;
    			flag=1;
    		}
            num++;
    	}
    	cout<<i+j<<endl;
    }
}
