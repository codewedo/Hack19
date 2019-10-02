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
  printGraph(){
    list<int> :: iterator it;
    for(int  i = 0; i < v; i++)
    {
      for(it = adj[v].begin(); it != adj[v].end(); it++){
        cout << *it;
      }
  }
}
int main(){
  addEdge(1,3);
  addEdge(2,4);
  addEdge(5,7);
}
