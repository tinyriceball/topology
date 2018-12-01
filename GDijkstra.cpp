#include "GDijkstra.h"
void Graph::Dijkstra(int v)
{
    int path[Vertex];
    int dist[Vertex];
    int i, k;
    for (i = 0; i < Vertex; i++)
    {
        dist[i] = Save_v[v][i];
        if (dist[i] != infinite && i != v)
            path[i] = Save_v[v][i];
        else
            path[i] = infinite;
    }
    int s[Vertex];
    s[0] = v;
    dist[v] = 0;
    int num = 1;
    while (num < Vertex)
    {
        int min = 999999;
        for (k = 0, i = 0; i < Vertex; i++)
        {
            if ((dist[i] != 0) && (dist[i] < min))
            {
                k = i;
                min = dist[i];
            }
        }
        cout << k << " " << path[k] << ":" << dist[k] << endl;
        s[num++] = k;
        for (i = 0; i < Vertex; i++)
        {
            if (dist[i] > dist[k] + Save_v[k][i])
            {
                dist[i] = dist[k] + Save_v[k][i];
                path[i] = Save_v[k][i];
            }
        }
        dist[k] = 0;
    }
};