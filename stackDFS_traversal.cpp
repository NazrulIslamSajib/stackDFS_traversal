#include<bits/stdc++.h>
using namespace std;
int const mx=10000;
vector<int>adj[mx];
bool vis[mx];
stack<int>st;
int main()
{

    int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    /// adjacent gula dekhi
    cout<<"ADjacent gula dekhi"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"NODE....."<<i<<"    ";
        for(auto x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    st.push(1);
    while(!st.empty())
    {
         cout<<st.top()<<" ";
         vis[st.top()]=1;
         int y=st.top();
         st.pop();
         for(auto x:adj[y])
         {

            if(vis[x]==0)
            {
             st.push(x);

            }
         }
    }


















    return 0;
}

