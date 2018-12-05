
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

	int num, i, j, k;


	cout << "张卓然" << endl;

	cout << "请输入要增加边的个数：\n";

	cin >> num;

	for (i = 0; i < num; i++)

	{

		getchar();

		cout << "请输入增加的边的起始路由器：";

		cin >> i;

		if (Vertex_Verify(i))

		{

			cout << "请输入另外一个路由器：";

			cin >> j;

			if (i == j)

			{

				cout << "开始路由器与目的路由器为同一个路由器，请重新输入" << endl;

				return;

			}

			else

			{

				if (Vertex_Verify(j))

				{

					if (i != j && Save_v[i][j] == infinite)

					{

						cout << "请输入两个路由器之间的距离：";

						cin >> k;

						app << i;

						app << " ";

						app << j;

						app << " ";

						app << k;

						app << endl;

						Save_v[i][j] = k;

						Save_v[j][i] = k;

						cout << "插入成功" << endl;

						cout << endl;

						Refresh_List();

						return;

					}

					else

					{

						cout << "输入的信息已存在，输入失败，请重新操作" << endl;

						cout << endl;

						i--;

					}

				}

				else

				{

					int judge = 0;

					cout << "输入1插入新路由器，输入任意值返回" << endl;

					cout << endl;

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

			cout << "该路由器不存在，是否要插入新路由器？" << endl;

			cout << endl;

			int judge = 0;

			cout << "该路由器不存在，是否要插入新路由器？输入1添加新路由器，输入任意值返回" << endl;

			cout << endl;

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

		cout << b[x] << endl;

		infile >> c[x];

		x++;

		count = x;

	}

	cout << "------------------------------" << endl;

	infile.close();

	int start, end;

	cout << "输入你想删除的路径的起始路由器：";

	cin >> start;

	cout << "输入你想删除的路径的终止路由器：";

	cin >> end;

	int f = 0;

	if (start != end && Save_v[start][end] != infinite)

	{

		while (f < count)

		{

			if (a[f] == start && b[f] == end)

			{

				c[f] = infinite;

				cout << "删除成功" << endl;

				cout << endl;

				break;

			}

			if (a[f] == end && b[f] == start)

			{

				c[f] = infinite;

				cout << "删除成功" << endl;

				cout << endl;

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

		if (!Vertex_Verify(start)) //如果删除该边后，开始点不存在边，则将该路由表从链表中移除

		{

			List *temp = head;

			temp = ergodic(temp, start);

			temp->Delete(temp);

		}

		if (!Vertex_Verify(end)) //如果删除该边后，结束点不存在边，则将该路由表从链表中移除

		{

			List *temp = head;

			temp = ergodic(temp, end);

			temp->Delete(temp);

		}

		Refresh_List();

	}
	else
	{

		cout << "输入的路径不存在";
		cout << endl;

	}

}
