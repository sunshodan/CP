#include <bits/stdc++.h>
using namespace std;
vector<long long> dfs(long long n,long long k)
{
    if(n==k)
    {
        vector<long long> arr;
        arr.push_back(n);
        return arr;
    }
    if(n>k)
    {
        vector<long long> arr;
        return arr;
    }
    vector<long long> mul=dfs(2*n,k);
    // mul.push_back(n);
    long long newn=(10*n)+1;
    vector<long long> one=dfs(newn,k);
    // one.push_back(n);
    vector<long long> newvect;
    if(newvect.size()>0||one.size()>0||mul.size()>0)
    {
    for(long long i=0;i<mul.size();i++)
    {
        newvect.push_back(mul[i]);
    }
    for(long long i=0;i<one.size();i++)
    {
        newvect.push_back(one[i]);
    }
    newvect.push_back(n);
    }
    return newvect;
}
int main() {
    // cout<<"Hello World!";
    long long n,k;
    cin>>n>>k;
    vector<long long> arr=dfs(n,k);
    if(arr.size()==0)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<arr.size()<<endl;
        // arr.reverse();
        reverse(arr.begin(), arr.end());
        for(long long i=0;i<arr.size();i++)
            {
                cout<<arr[i]<<" ";
            }
    }
}
