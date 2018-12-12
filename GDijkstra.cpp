#include "GDijkstra.h"
void Graph::dijkstra(int router, Router *temp)
{
   
    temp->originate();
    int dist[Vertex];
    int i, des;
    int path[Vertex];
    memset(dist, 9999999, sizeof(int) * Vertex);
    memset(path, 9999999, sizeof(int) * Vertex);
    for (i = 0; i < Vertex; i++)
    {
        dist[i] = matrix[router][i];
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
        temp->assign(des, dist[des], path[des]);
        s[num++] = des;
        for (i = 0; i < Vertex; i++)
        {
            if (dist[i] > dist[des] + matrix[des][i])
            {
                dist[i] = dist[des] + matrix[des][i];
                path[i] = path[des];
            }
        }
        dist[des] = 0;
    }
    if (router != 0)
    {
        temp->assign(router, 0, router);
    }
};