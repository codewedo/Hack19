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
  // Fucnction to add edge between vertices in a graph
  addEdge(int v, int u){
      adj[v].push_back(u);
  }
  //Function to print all vertices of graph
  printGraph(){
    list<int> :: iterator it;
    for(int  i = 0; i < v; i++)
    {
      for(it = adj[v].begin(); it != adj[v].end(); it++){
        cout << *it << " ";
      }
  }
}
int main(){
  graph g;
  g.addEdge(1,3);
  g.addEdge(2,4);
  g.addEdge(5,7);
  g.printGraph();
 
}
