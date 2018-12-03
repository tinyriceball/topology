#include "List.h"
List::List()
{
    Name = -1;
    Cur_List[0] = 0;
    Next_Jump[0] = 0;
    pre = NULL;
    next = NULL;
};
List::~List(){};

void List::Refresh(int des, int dist, int next)
{
    Cur_List[des] = dist;
    Next_Jump[des] = next;
};
