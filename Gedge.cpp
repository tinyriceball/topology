#include "Gedge.h"

void Graph::Insert_edge()

{

	ofstream app;

	app.open("data.txt", ofstream::app);

	if (!app)

	{

		cout << "���ļ�ʧ��";

		return;

	}

	int i, j, k;

	cout << "��������Ҫ��ӵ�·������";

	cin >> i;

	if (Vertex_Verify(i))

	{

		cout << "����������һ��·������";

		cin >> j;

		if (i == j)

		{

			cout << "��ʼ·������Ŀ��·����Ϊͬһ���ڵ㣬����������" << endl;

			return;

		}

		else

		{

			if (Vertex_Verify(j))

			{

				if (Save_v[i][j] == infinite)

				{

					cout << "�������������֮��ľ��룺";

					cin >> k;

					Save_v[i][j] = k;

					Save_v[j][i] = k;

					app << endl;

					app << i;

					app << " ";

					app << j;

					app << " ";

					app << k;

					app << endl;

					cout << "����ɹ�" << endl;

					Refresh_List();

					return;

				}

				else

				{

					cout << "�������Ϣ�Ѵ��ڣ�����ʧ�ܣ������²���";

				}

			}

			else

			{

				int judge = 0;

				cout << "�ýڵ㲻���ڣ��Ƿ�Ҫ�����½ڵ㣿����1�����½ڵ�" << endl;

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

		cout << "�ýڵ㲻���ڣ��Ƿ�Ҫ�����½ڵ㣿����1�����½ڵ�" << endl;

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

	cout << "��ǰ����·����:" << endl;

	cout << "------------------------------" << endl;

	cout << "��� \t"

		<< "�յ�" << endl;

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

	cout << "��������ɾ����·������ʼ���㣺";

	cin >> start;

	cout << "��������ɾ����·������ֹ���㣺";

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

		cout << "ɾ���ɹ�" << endl;

	}

	else

	{

		cout << "�����·��������" << endl;

	}

}