#include "GDijkstra.h"
void Graph::Dijkstra(int router, List *temp)
{
    temp->Originate();
    int dist[Vertex];
    int i, des;
    int path[Vertex];
    memset(dist,0,sizeof(int)*Vertex);
    memset(path, 0, sizeof(int) * Vertex);
    for (i = 0; i < Vertex; i++)
    {
        dist[i] = Save_v[router][i];
        if (dist[i] != infinite)
        {
            path[i] = i;
        }
        else
        {
            path[i] = infinite;
        }
    }
    int s[Vertex];
    memset(s, 0, sizeof(int) * Vertex);
    s[0] = router;
    dist[router] = 0;
    int num = 1;
    while (num < Vertex)
    {
        int min = 999999;
        for (des = 0, i = 0; i < Vertex; i++)
        {
            if ((dist[i] != 0) && (dist[i] < min))
            {
                des = i;
                min = dist[i];
            }
        }
        if (path[des] == des) //当下一跳等于目的地
        {
            temp->Refresh(des, dist[des], -1); //将-1赋给下一跳
        }
        else
        {
            temp->Refresh(des, dist[des], path[des]);
        }
        s[num++] = des;
        for (i = 0; i < Vertex; i++)
        {
            if (dist[i] > dist[des] + Save_v[des][i])
            {
                dist[i] = dist[des] + Save_v[des][i];
                path[i] = path[des];
            }
        }
        dist[des] = 0;
    }
};