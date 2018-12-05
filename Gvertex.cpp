#include "Gvertex.h"

//��ͼG�в�����k
void Graph::Insert_vertex(int k)
{
	//�ı�ߵ��ڽӾ���
	if (k < 1 || k > Vertex)
	{
		cout << "非法的请求" << endl;
		return;
	}
	else
	{
		//���ļ���д��k k 0
		fstream fout;
		fout.open("data.txt", ios::out | ios::app);
		int end = 0, dist = 0;
		cout << "请输入与该点有关的边的末节点" << endl;
		cin >> end;
		if (Vertex_Verify(end))
		{
			cout << "请输入该边的长度" << endl;
			cin >> dist;
			if (dist > 0 && dist < infinite)
			{
				fout << k << " " << end << " " << dist << endl;
				Save_v[k][end] = dist;
				Save_v[end][k] = dist;
				fout.close();
				cout << "Insert successful.";
				Refresh_List();
			}
			else
			{
				cout << "无意义的操作" << endl;
				return;
			}
		}
		else
		{
			cout << "非法的请求" << endl;
			return;
		}
	}
}

//��ͼG��ɾ�����k
void Graph::Delete_vertex(int k)
{
	fstream fin;
	fin.open("data.txt");
	int i[Vertex], j[Vertex], w[Vertex];
	int counter = 0;
	while (fin >> i[counter] >> j[counter] >> w[counter])
	{
		counter++;
	}
	fin.close();

	for (int a = 0; a < counter; ++a)
	{
		if (k == i[a]||k==j[a])
			goto dele;
	}
	cout << "The vertex could not be found." << endl;
	return;
//ɾ��
dele:
	//���ļ���ɾ��
	ofstream fout("data.txt");
	for (int a = 0; a < counter; ++a)
	{
		if (i[a] == k||j[a]==k)
			continue;
		fout << i[a] << " " << j[a] << " " << w[a] << endl;
	}
	fout.close();
	//���ıߵ��ڽӾ���
	for (int a = 0; a < Vertex; ++a)
	{
		if (a == k)
		{
		}
		else
		{
			Save_v[k][a] = infinite;
			Save_v[a][k] = infinite;
		}
	}
	cout << "Delete successful.";
	Refresh_List();
}
