#include<bits/stdc++.h>
using namespace std;
/*number of unreachable nodes*/
vector<int> graph[1000];
bool visited[1000];
int c =0;

void dfs(int s)
{
  c =c +1;
  visited[s]=true;
  for(int i=0;i<graph[s].size();i++)
    if(visited[graph[s][i]]==false)
      dfs(i);
}

int main()
{
  int n,m;
  cin>>n>>m;
  int i;
  for(i=0;i<m;i++)
  {
    int x,y; 
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  int k;
  cin>>k;
  dfs(k);

  cout<<n-c ;
}