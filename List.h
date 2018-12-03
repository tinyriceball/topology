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
  void Refresh(int des, int dist, int next);
  void LDelete(List *k);
  void Instert();
  void Print(int v_num);
  List *Getlist(List *h, int k);
  List();
  ~List();

private:
  int Cur_List[MAX];
  int Next_Jump[MAX];
};
#endif
