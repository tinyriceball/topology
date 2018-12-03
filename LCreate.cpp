#include "LCreate.h"
void Graph::Create_List()
{
    List *temp = NULL;
    List *cur = NULL;
    cur = head;
    int v_num = Vertex_num();
    int list = 1;
    do
    {
        cur->next = new List;
        temp = cur;
        cur = cur->next;
        cur->pre = temp;
        bool judge = Vertex_Verify(list);
        if (judge)
        {
            Dijkstra(list, cur);
            v_num--;
        } //给当前路由表赋值
        list++;
    } while (v_num);
};