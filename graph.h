#include <iostream>
#include <fstream>
#include "list.h"
using namespace std;
#define Vertex 100
#define infinite 10000000
// class Edge //边
// {
// public:
//   Edge();
//   ~Edge();
//   int Weight; //权重
//   int Row;    //行
//   int Line;   //列
// };
// Edge::Edge()
// {
//   Weight = 0;
//   Row = 0;
//   Line = 0;
// };
// Edge::~Edge(){};
class Graph
{
public:
  Graph();
  ~Graph();
  void Create();
  void Insert_vertex(); //插入节点
  void Delete_vertex(); //删除节点
  void Insert_edge();   //插入边
  void Delete_edge();   //删除边
  int Get_First(int a); //获取第一个节点
  int Get_Next(int a); //获得下一个节点
  void Dijkstra(int v);      //最短路径
  int Get(int i, int j);//获得矩阵中元素的信息

  private:
  List route;
  int Edge_Num;
  int Save_v[Vertex][Vertex];
};

