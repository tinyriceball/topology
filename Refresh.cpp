#include "Refresh.h"
void Graph::Refresh_List()
{
    {
        List *cur = NULL;
        cur = head;
        do
        {
            cur = cur->next;
            if (Vertex_Verify(cur->Name))
            {
                Dijkstra(cur->Name, cur); //调用最短路径算法
            }                             //给当前路由表赋值
        } while (cur->next);
    };
}