#include "Refresh.h"
void Graph::Refresh_List()
{
    {
        List *cur = NULL;
        cur = head;
        int v_num=Vertex_num();
        do
        {
            cur = cur->next;
            if (Vertex_Verify(cur->Name))
            {
                Dijkstra(cur->Name, cur); //调用最短路径算法
                v_num--;
            }  
        } while (v_num);
    };
}