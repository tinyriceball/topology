#include "GDijkstra.h"
void Graph::Dijkstra(int v, List *temp)
{
    int dist[Vertex];
    int i, des;
    int path[Vertex];
    for (i = 0; i < Vertex; i++)
    {
        dist[i] = Save_v[v][i];
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
    s[0] = v;
    dist[v] = 0;
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
        if (path[des] == des)
        {
            temp->Refresh(des, dist[des], -1);
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