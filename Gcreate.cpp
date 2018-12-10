#include "Gcreate.h"

void Graph::Create_Graph()

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

			Save_v[i][j] = w;

			Save_v[j][i] = w;

		}

	}

	cout << "拓扑创建成功" << endl;

	fin.close();

};

int Graph::Get(int i, int j)

{

	return Save_v[i][j];

};