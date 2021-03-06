#include "Gvertex.h"
void Graph::insert_vertex(int k)
{
	if (k < 1 || k > Vertex)
	{
		cout << "非法的请求" << endl;
		return;
	}
	else
	{
		fstream fout;
		fout.open("data.txt", ios::out | ios::app);
		int end = 0, dist = 0;
		cout << "请输入与该路由器有关的另一个路由器" << endl;
		cin >> end;
		if (vertex_verify(end))
		{
			cout << "请输入该边的长度" << endl;
			cin >> dist;
			if (dist > 0 && dist < infinite)
			{
				fout << k << " " << end << " " << dist << endl;
				matrix[k][end] = dist;
				matrix[end][k] = dist;
				fout.close();
				head->instert_list(head, k);
				refresh_list();
				cout << "插入成功"<<endl;
				return;
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

void Graph::delete_vertex(int k)
{
	Router *temp = head;
	temp = ergodic(head, k);
	temp->Name = -1;
	fstream fin;
	fin.open("data.txt");
	int i[Vertex], j[Vertex], w[Vertex];
	int counter = 0;
	while (fin >> i[counter] >> j[counter] >> w[counter])
	{
		counter++;
	}
	fin.close();

	for (int a = 0; a < counter; a++)
	{
		if (k == i[a] || k == j[a])
			goto dele;
	}
	cout << "该路由器不存在" << endl;
	return;
dele:
	ofstream fout("data.txt");
	for (int a = 0; a < counter; ++a)
	{
		if (i[a] == k || j[a] == k)
			continue;
		fout << i[a] << " " << j[a] << " " << w[a] << endl;
	}
	fout.close();
	for (int a = 1; a < Vertex; a++)
	{
		if (a != k)
		{
			matrix[k][a] = infinite;
			matrix[a][k] = infinite;
		}
	}

	if (temp->next == NULL)
	{
		delete (temp);
		temp=NULL;
		refresh_list();
	}
	else
	{
		temp->pre->next = temp->next;
		temp->next->pre = temp->pre;
		delete (temp);
		temp = NULL;
		refresh_list();
	}
	cout << "删除成功" << endl;
	return;
}
