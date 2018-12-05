#ifndef LIST_H
#define LIST_H
#define Vertex 30
#include <iostream>
using namespace std;
#define MAX 100
class List
{
public:
  int Name;
  List *pre;
  List *next;
  void Refresh(int des, int dist, int next);//刷新当前链表的数据
  void Delete(List *k);//删除当前节点
  void Instert(List*head,int router);//插入节点
  void Print(int v_num);//输出当前路由表
  List();
  ~List();

private:
  int Distance[MAX];//最短距离
  int Next_Jump[MAX];//下一跳
};
#endif
