/*GOD     IS    GREAT,
  SO    AM    I*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ford(i,n) for(long long int i=0;i<n;i++)
#define fore(i,n) for(long long int i=0;i<=n;i++)
#define test ll t;cin>>t;while(t--)
#define op(z) cout<<z<<endl
#define ops(z) cout<<z<<" "
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<" "<<x<<endl
#define pp pair<ll,ll>
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif
}
void solve()
{
    string s,s1;
    map<char,ll> s2;
    getline(cin,s);
    getline(cin,s1);
    ford(i,s.length())
    {
        if(s[i]!=' ')s2[s[i]]++;
    }
    ford(i,s1.length())
    {
        if(s1[i]!=' ')
        {
            s2[s1[i]]--;
            if(s2[s1[i]]<0)
            {
                op("NO");
                return ;
            }
        }
    }
    op("YES");
}
int main()
{
    fastIO;
    file();
    //test 
    {
        solve();
    }
    return 0;
}
