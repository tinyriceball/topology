#include "Gcreate.h"
void Graph::create_graph()
{
    ifstream fin;
    fin.open("data.txt");
    int i, j, w;
    if (fin.eof())
    {
        cout << "文件打开失败" << endl;
    }
    else
    {
        while (fin >> i)//构建图矩阵
        {
            fin >> j;
            fin >> w;
            matrix[i][j] = w;
            matrix[j][i] = w;
        }
    }
    cout << "拓扑创建成功" << endl;
    fin.close();
};
int Graph::get(int i, int j)
{
    return matrix[i][j];
};
