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
  void create_graph();
  void create_list();
  void dijkstra(int v, Router *node); //最短路径
  void list_refresh(string list);   //更新路由表
  void insert_vertex(int k);        //插入节点
  void delete_vertex(int k);        //删除节点
  void insert_edge();               //插入边
  void delete_edge();               //删除边
  int get(int i, int j);            //获得矩阵中元素的信息
  bool vertex_verify(int i);        //节点是否存在
  int vertex_num();
  void refresh_list(); //链表刷新
  Router *ergodic(Router *node, int k);
  Router *head;

private:
  int matrix[Vertex][Vertex];
};
