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
   
        ll n,tass;
        cin>>n;
        ll broom[n]={0},bride[n]={0},v=0;
        tass=n;
        while(tass--)
        {
            ll size,xi;
            cin>>size;
            ford(i,size)
            {
                cin>>xi;
                xi--;
                if(bride[v]!=2)
                    if(broom[xi]==0||broom[xi]==1)
                {
                    broom[xi]=2;
                    bride[v]=2;
                }
                
                if(bride[v]==2)
                {
                    if(broom[xi]!=2)
                    {
                        broom[xi]=1;
                    }
                }
            }
           
            v++;
        }
                 ll gf=0;
                 ford(i,n)
             {
                  if(bride[i]==0&&gf==0)
                        {
                            ford(d,n)
                        {
                            if(broom[d]==0||broom[d]==1)
                          {
                               op("IMPROVE");
                               ops(i+1);op(d+1);
                            gf=1;
                               break;
                              }
                      }
                      }
                    if(gf==1)break;
                       
              }
             if(gf==0)op("OPTIMAL");
            
}
int main()
{
    fastIO;
    file();
    test 
    {
        solve();
    }
    return 0;
}