#include "graph.h"
Graph::Graph()
{
    for (int i = 0; i < Vertex; i++)
    {
        for (int j = 0; j < Vertex; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = infinite; //两点之间无限远
            }
        }
    }
    head = new List;
};

Graph::~Graph(){};
bool Graph::vertex_verify(int i)
{
    for (int a = 1; a < Vertex; a++)
    {
        if (i != a && matrix[i][a] != infinite)
        {
            return true;
        }
    }
    return false;
};
int Graph::vertex_num()
{
    int num = 0;
    for (int a = 1; a < Vertex; a++)
    {
        if (vertex_verify(a))
        {
            num++;
        }
    }
    return num;
};
