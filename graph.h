#include <iostream>
#include <fstream>
#include "List.h"
#include <string.h>
using namespace std;
#define infinite 10000000
class Graph
{
public:
  Graph();
  ~Graph();
  void Create_Graph();
  void Create_List();
  void Dijkstra(int v, List *node); //最短路径
  void List_Refresh(string list);   //更新路由表
  void Insert_vertex(int k);        //插入节点
  void Delete_vertex(int k);        //删除节点
  void Insert_edge();               //插入边
  void Delete_edge();               //删除边
  void Dijkstra(int v);             //最短路径
  int Get(int i, int j);            //获得矩阵中元素的信息
  bool Vertex_Verify(int i);        //节点是否存在
  int Vertex_num();
  void Refresh_List(); //链表刷新
  List *ergodic(List *node, int k);
  List *head;

private:
  int Save_v[Vertex][Vertex];
};
