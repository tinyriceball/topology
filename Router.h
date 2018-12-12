#ifndef ROUTER_H
#define ROUTER_H
#define Vertex 30
#include <iostream>
using namespace std;
#define MAX 100
class Router
{
public:
  int Name;
  Router *pre;
  Router *next;
  void assign(int des, int dist, int next); //刷新当前链表的数据
  void instert_list(Router *head, int router); //插入节点
  void print(int v_num);                     //输出当前路由表
  void originate();
  Router();
  ~Router();

private:
  int distance[MAX];  //最短距离
  int next_jump[MAX]; //下一跳
};
#endif
