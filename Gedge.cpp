#include "Gedge.h"
void Graph::Insert_edge()
{
	ofstream app;
	app.open("data.txt", ofstream::app);
	if (!app)
	{
		cout << "打开文件失败";
		return;
	}
	int i, j, k;
	cout << "请输入需要添加的路由器：";
	cin >> i;
	if (Vertex_Verify(i))
	{
		cout << "请输入另外一个路由器：";
		cin >> j;
		if (i == j)
		{
			cout << "开始路由器与目的路由器为同一个节点，请重新输入" << endl;
			return;
		}
		else
		{
			if (Vertex_Verify(j))
			{
				if (Save_v[i][j] == infinite)
				{
					cout << "请输入两个结点之间的距离：";
					cin >> k;
					Save_v[i][j] = k;
					Save_v[j][i] = k;
					app << i;
					app << " ";
					app << j;
					app << " ";
					app << k;
					app << endl;
					cout << "插入成功"<<endl;
					Refresh_List();
					return;
				}
				else
				{
					cout << "输入的信息已存在，输入失败，请重新操作"<<endl;
				}
			}
			else
			{
				int judge = 0;
				cout << "该节点不存在，是否要插入新节点？输入1插入新节点" << endl;
				cin >> judge;
				if (judge == 1)
				{
					Insert_vertex(j);
				}
				else
				{
					return;
				}
			}
		}
	}
	else
	{
		int judge = 0;
		cout << "该节点不存在，是否要插入新节点？输入1插入新节点" << endl;
		cin >> judge;
		if (judge == 1)
		{
			Insert_vertex(i);
		}
		else
		{
			return;
		}
	}
	app.close();
}

void Graph::Delete_edge()
{
	ifstream infile;
	infile.open("data.txt");
	int a[Vertex], b[Vertex], c[Vertex];
	int x = 0;
	int count = 0;
	cout << "------------------------------" << endl;
	cout << "当前存在路径有:" << endl;
	cout << "------------------------------" << endl;
	cout << "起点 \t"
		 << "终点" << endl;
	while (infile >> a[x])
	{
		cout << a[x] << "   <->   ";
		infile >> b[x];
		infile >> c[x];
		cout << b[x] << " " << c[x] << endl;
		x++;
		count = x;
	}
	cout << "------------------------------" << endl;
	infile.close();
	int start, end;
	cout << "输入你想删除的路径的起始顶点：";
	cin >> start;
	cout << "输入你想删除的路径的终止顶点：";
	cin >> end;
	int f = 0;
	if (start != end && Save_v[start][end] != infinite)
	{
		while (f < count)
		{
			if (a[f] == start && b[f] == end)
			{
				c[f] = infinite;
				Save_v[start][end] = infinite;
				Save_v[end][start] = infinite;
				break;
			}
			if (a[f] == end && b[f] == start)
			{
				c[f] = infinite;
				Save_v[start][end] = infinite;
				Save_v[end][start] = infinite;
				break;
			}
			f++;
		}
		ofstream outfile;
		outfile.open("data.txt", ios::out);
		for (f = 0; f < count; f++)
		{
			if (c[f] != 0 && c[f] != infinite)
			{
				outfile << a[f] << " ";
				outfile << b[f] << " ";
				outfile << c[f] << endl;
			}
		}
		outfile.close();
		Refresh_List();
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "输入的路径不存在"<<endl;
	}
}
