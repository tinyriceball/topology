#include "LCreate.h"
void Graph::Create_List()
{
    List *temp = NULL;
    List *cur = NULL;
    cur = head;
    int v_num = Vertex_num();
    int list;
    do
    {
        cur->next = new List;
        temp = cur;
        cur = cur->next;
        cur->pre = temp;
        if (Vertex_Verify(list))
        {
            Dijkstra(list, temp);
            v_num--;
        } //给当前路由表赋值
    } while (v_num);
};