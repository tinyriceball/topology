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
  void refresh(int des, int dist, int next); //刷新当前链表的数据
  void instert_list(List *head, int router);      //插入节点
  void print(int v_num);                     //输出当前路由表
  void originate();
  List();
  ~List();

private:
  int distance[MAX];  //最短距离
  int next_jump[MAX]; //下一跳
};
#endif
