#include<iostream>
using namespace std;
class graph{
  int V;
  list<int> * adj;
  public:
  graph(int v){
    this->V = v;
    adj = new vector<int> adj[v];
  }
  addEdge(int v, int u){
      adj[v].push_back(u);
  }
int main(){
  graph g2;
  g2.addEdge(1,1);
}
