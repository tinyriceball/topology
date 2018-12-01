#include "GcreateGet.h"
int Graph::Get_First(Graph *g, int a){
    //     if (g)
    //     {
    //         for (int i = 0; i < Vertex; i++)
    //         {
    //             if (g->Save_v[a][i] != 0 && g->Save_v[a][i] != infinite)
    //             {
    //                 return i;
    //             }
    //         }
    //         return -1;
    //     }
    //     else
    //     {
    //         cout << "The graph is empty" << endl;
    //         return -1;
    //     }
};
int Graph::Get_Next(Graph *g, int a){
    // if (g)
    // {
    //     for (int i = a; i < Vertex; i++)
    //     {
    //         if (g->Save_v[a][i] != 0 && g->Save_v[a][i] != infinite)
    //         {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
    // else
    // {
    //     cout << "The graph is empty" << endl;
    //     return -1;
    // }
};
void Graph::Create()
{
    ifstream fin;
    fin.open("data.txt");
    int i, j, w;
    if (fin.eof())
    {
        cout << "fail to open the file" << endl;
    }
    else
    {
        while (fin)
        {
            for (int a = 0; a < 3; a++)
            {
                fin >> i;
                fin >> j;
                fin >> w;
                Save_v[i - 1][j - 1] = w;
                Save_v[j - 1][i - 1] = w;
            }
        }
    }
    cout << "the graph was create successfully" << endl;
};
int Graph::Print(int i, int j)
{
    return Save_v[i][j];
};
