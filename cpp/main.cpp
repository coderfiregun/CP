#include<bits/stdc++.h>
using namespace std;


void solve(){
   int x;
   cin>>x;
   cout<< (3*x +5) <<endl;
 
}
 
signed main (void)
{
    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc=1;
    // cin>>tc;
    for(int ctc=1;ctc<=tc;++ctc){
         // cout<<"Case #"<<ctc<<": ";
         solve();
         // if(ctc!=tc) cout<<endl;
    }
    return 0;
}