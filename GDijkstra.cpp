#include "GDijkstra.h"

void Graph::Dijkstra(int v)
{
    cout << "|目的主机所在的网络|  "
         << "| 下一跳地址 |    "
         << "|距离|" << endl; //跳数 距离
    cout << "---------------------------------------------------" << endl;

    int dist[vertexNum];
    int i, k;
    int path[vertexNum];
    for (i = 1; i <= vertexNum; i++)
    {
        dist[i] = Save_v[v][i];
        if (dist[i] != infinite)
            path[i] = i;
        else
            path[i] = infinite;
    }
    int s[vertexNum];
    s[0] = v;
    dist[v] = 0;
    int num = 1;
    while (num < vertexNum)
    {
        int min = 999999;
        for (k = 1, i = 1; i <= vertexNum; i++)
        {
            if ((dist[i] != 0) && (dist[i] < min))
            {
                k = i;
                min = dist[i];
            }
        }
        cout << "   |  " << k << ".x.x.x  |      ";
        if (dist[k] == 1)
        {
            cout << "|  直接交付  |      " << dist[k] << "  |" << endl; // 距离
            cout << "---------------------------------------------------" << endl;
        }
        else
        {
            cout << "|  " << path[k] << ".x.x.x   |      " << dist[k] << "  |" << endl; // 距离
            cout << "---------------------------------------------------" << endl;
        }
        s[num++] = k;
        for (i = 1; i <= vertexNum; i++)
        {
            if (dist[i] > dist[k] + Save_v[k][i])
            {
                dist[i] = dist[k] + Save_v[k][i];
                path[i] = path[k];
            }
        }
        dist[k] = 0;
    }
    cout << endl;
    cout << endl;
};