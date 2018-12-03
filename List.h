#ifndef LIST_H
#define LIST_H
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
  List();
  ~List();

private:
  int Cur_List[MAX];
  int Next_Jump[MAX];
};
#endif
