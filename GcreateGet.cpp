#include "GcreateGet.h"
int Graph::Get_First(Graph *g, int a)
{
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
int Graph::Get_Next(Graph *g, int a)
{
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
    while (fin)
    {
        for (int a = 1; a <= 3; a++)
        {
            fin >> i;
            fin >> j;
            fin >> w;
            cout << "w" << w << endl;
            Save_v[i][j] = w;
            Save_v[j][i] = w;
            cout << Save_v[i][j] << endl;
        }
    }
    cout << "the graph was create successfully" << endl;
}
int Graph::Print(int i, int j)
{
    return Save_v[i][j];
};
