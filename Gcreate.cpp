#include "Gcreate.h"
void Graph::Create_Graph()
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
        while (fin >> i)
        {
            fin >> j;
            fin >> w;
            Save_v[i][j] = w;
            Save_v[j][i] = w;
        }
    }
    cout << "the graph was create successfully" << endl;
    fin.close();
};
int Graph::Get(int i, int j)
{
    return Save_v[i][j];
};
