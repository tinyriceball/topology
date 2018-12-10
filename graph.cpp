#include "graph.h"
Graph::Graph()
{
    for (int i = 0; i < Vertex; i++)
    {
        for (int j = 0; j < Vertex; j++)
        {
            if (i == j)
            {
                Save_v[i][j] = 0;
            }
            else
            {
                Save_v[i][j] = infinite; //两点之间无限远
            }
        }
    }
    head = new List;
    vertex = 0;
};

Graph::~Graph(){};
bool Graph::Vertex_Verify(int i)
{
    for (int a = 1; a < Vertex; a++)
    {
        if (i != a && Save_v[i][a] != infinite)
        {
            return true;
        }
    }
    return false;
};
int Graph::Vertex_num()
{
    int num = 0;
    for (int a = 1; a < Vertex; a++)
    {
        if (Vertex_Verify(a))
        {
            num++;
        }
    }
    return num;
};
