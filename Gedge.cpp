
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

	int num, i, j, k;


	cout << "��׿Ȼ" << endl;

	cout << "������Ҫ���ӱߵĸ�����\n";

	cin >> num;

	for (i = 0; i < num; i++)

	{

		getchar();

		cout << "���������ӵıߵ���ʼ·������";

		cin >> i;

		if (Vertex_Verify(i))

		{

			cout << "����������һ��·������";

			cin >> j;

			if (i == j)

			{

				cout << "��ʼ·������Ŀ��·����Ϊͬһ��·����������������" << endl;

				return;

			}

			else

			{

				if (Vertex_Verify(j))

				{

					if (i != j && Save_v[i][j] == infinite)

					{

						cout << "����������·����֮��ľ��룺";

						cin >> k;

						app << i;

						app << " ";

						app << j;

						app << " ";

						app << k;

						app << endl;

						Save_v[i][j] = k;

						Save_v[j][i] = k;

						cout << "����ɹ�" << endl;

						cout << endl;

						Refresh_List();

						return;

					}

					else

					{

						cout << "�������Ϣ�Ѵ��ڣ�����ʧ�ܣ������²���" << endl;

						cout << endl;

						i--;

					}

				}

				else

				{

					int judge = 0;

					cout << "����1������·��������������ֵ����" << endl;

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

			cout << "��·���������ڣ��Ƿ�Ҫ������·������" << endl;

			cout << endl;

			int judge = 0;

			cout << "��·���������ڣ��Ƿ�Ҫ������·����������1�����·��������������ֵ����" << endl;

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

	cout << "��ǰ����·����:" << endl;

	cout << "------------------------------" << endl;

	cout << "��� \t"

		<< "�յ�" << endl;

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

	cout << "��������ɾ����·������ʼ·������";

	cin >> start;

	cout << "��������ɾ����·������ֹ·������";

	cin >> end;

	int f = 0;

	if (start != end && Save_v[start][end] != infinite)

	{

		while (f < count)

		{

			if (a[f] == start && b[f] == end)

			{

				c[f] = infinite;

				cout << "ɾ���ɹ�" << endl;

				cout << endl;

				break;

			}

			if (a[f] == end && b[f] == start)

			{

				c[f] = infinite;

				cout << "ɾ���ɹ�" << endl;

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

		if (!Vertex_Verify(start)) //���ɾ���ñߺ󣬿�ʼ�㲻���ڱߣ��򽫸�·�ɱ���������Ƴ�

		{

			List *temp = head;

			temp = ergodic(temp, start);

			temp->Delete(temp);

		}

		if (!Vertex_Verify(end)) //���ɾ���ñߺ󣬽����㲻���ڱߣ��򽫸�·�ɱ���������Ƴ�

		{

			List *temp = head;

			temp = ergodic(temp, end);

			temp->Delete(temp);

		}

		Refresh_List();

	}
	else
	{

		cout << "�����·��������";
		cout << endl;

	}

}
