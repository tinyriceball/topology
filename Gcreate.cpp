#include "Gcreate.h"

void Graph::Create_Graph()

{

	ifstream fin;

	fin.open("data.txt");

	int i, j, w;

	if (fin.eof())

	{

		cout << "�ļ���ʧ��" << endl;

	}

	else

	{

		while (fin >> i)//����ͼ����

		{

			fin >> j;

			fin >> w;

			Save_v[i][j] = w;

			Save_v[j][i] = w;

		}

	}

	cout << "���˴����ɹ�" << endl;

	fin.close();

};

int Graph::Get(int i, int j)

{

	return Save_v[i][j];

};