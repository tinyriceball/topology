#include "LCreate.h"
void Graph::Create_List()
{
    List *temp = NULL;
    List *cur = NULL;
    cur = head;
    int list;
    do
    {
        cur->next = new List;
        temp = cur;
        cur = cur->next;
        cur->pre = temp;
        Dijkstra(list, temp); //给当前路由表赋值

    } while (Save_v[list][]);
};