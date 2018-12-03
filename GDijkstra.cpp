#include "GDijkstra.h"

void Graph::Dijkstra(int v, List *temp)
{
    cout << "|目的主机所在的网络|  "
         << "| 下一跳地址 |    "
         << "|距离|" << endl; //跳数 距离
    cout << "---------------------------------------------------" << endl;

    int dist[vertexNum];
    int i, des;
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
        for (des = 1, i = 1; i <= vertexNum; i++)
        {
            if ((dist[i] != 0) && (dist[i] < min))
            {
                des = i;
                min = dist[i];
            }
        }
        cout << "   |  " << des << ".x.x.x  |      ";
        if (dist[des] == 1)
        {
            temp->Refresh(des, dist[des], -1);
            cout
                << "|  直接交付  |      " << dist[des] << "  |" << endl; // 距离
            cout << "---------------------------------------------------" << endl;
        }
        else
        {
            temp->Refresh(des, dist[des], path[des]);
            cout << "|  " << path[des] << ".x.x.x   |      " << dist[des] << "  |" << endl; // 距离
            cout << "---------------------------------------------------" << endl;
        }
        s[num++] = des;
        for (i = 1; i <= vertexNum; i++)
        {
            if (dist[i] > dist[des] + Save_v[des][i])
            {
                dist[i] = dist[des] + Save_v[des][i];
                path[i] = path[des];
            }
        }
        dist[des] = 0;
    }
    cout << endl;
    cout << endl;
};