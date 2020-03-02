#include<iostream>
using namespace std;
#define MAX_VERTEX_NUM 10；
bool visited[MAX_VERTEX_NUM];//主要用来判断是否被访问过

class Grahp{
public:
    Graph();
    int FirstNeighbor(int v);//顶点v的第一个相邻的顶点
    int NextNeighbor(int v, int w);//顶点v，在w顶点后面的相邻顶点
    int vexnum
}
void visit(int w);//访问顶点w

void DFSTraverse(Graph G){
    for(int i=0;i<MAX_VERTEX_NUM;i++)
        visited[i]=false;
    for(int i=0;i<G.vexnum;i++)
        if(!visited[i]){
            DFS(G, i);
        }
}

void DFS(Graph G, int W){
    visit(w);
    visited[w]=true;
    for(int v = G.FirstNeighbor(w);v>=0;v=G.NextNeighbor(w,v)){
        if(!visited[v])
            visit(v);
    }
}