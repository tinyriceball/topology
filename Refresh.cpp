#include "Refresh.h"
void Graph::Refresh_List()
{
    List *cur = NULL;
    cur = head;
    do
    {
        cur = cur->next;
        if (Vertex_Verify(cur->Name)==true)
        {
            Dijkstra(cur->Name, cur); //调用最短路径算法
        }else{
            cur->Name=-1;
            cur->Originate();
        }
    } while (cur->next);
}