#include<iostream>
using namespace std;

/**
以下全部代码都是伪代码，不能跑的，只是完成了逻辑部分
*/
#define MAX_VERTEX_NUM 10；
bool visited[MAX_VERTEX_NUM];//主要用来判断是否被访问过
class Grahp{
public:
    Graph();
    int FirstNeighbor(int v);//顶点v的第一个相邻的顶点
    int NextNeighbor(int v, int w);//顶点v，在w顶点后面的相邻顶点
    int vexnum
}

class Queue{
public:
    Queue();
    void EnQueue(int w);//进入队列
    int DeQuene();//出队列
    bool isEmpty();//是否是空，空是返回1，不为空则返回0
}


void visit(int w);

//找出某一个顶点的所有相邻的顶点
void BFS(Grahp G, int w){
    visit(w);
    visited[w]=true;
    EnQueue(Q, w)
    while(!Q.isEmpty()){
        int w=DeQuene();
        for(int v=G.FirstNeighbor(w), v>=0;w=G.NextNeighbor(w,v)){
            if(!visited[v]){
                visit(v)
                visited[v]=true;
                Q.EnQueue(v);
            }
        }
    }
}

//广度优先算法
void BFSTraverse(Grahp G){
    for(int i=0;i<MAX_VERTEX_NUM;i++)
        visited[i]=false;
    Queue Q;
    for(int i=0;i<G.vexnum;i++){
        if(!visited[i]){
            BFS(G, i);
        }
    }
}