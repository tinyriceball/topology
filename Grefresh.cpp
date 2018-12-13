#include "Grefresh.h"
void Graph::refresh_list()
{
    Router *cur = NULL;
    cur = head;
    do
    {
        cur = cur->next;
        if (vertex_verify(cur->Name)==true)
        {
            dijkstra(cur->Name, cur); //调用最短路径算法
        }else{
            cur->Name=-1;
            cur->originate();
        }
    } while (cur->next);
}