#include "graph.h"

#include <iostream>

using namespace std;

Graph graph1;

int main()

{

	char Option = '0';

	while (Option != 'q')

	{

		cout << "---------------------------------------------------" << endl;

		cout << "������Ҫ���еĲ���" << endl;

		cout << "[1]��������" << endl;

		cout << "[2]�鿴·�ɱ�" << endl;

		cout << "[3]�߲���" << endl;

		cout << "[4]�ڵ����" << endl;

		cout << "[q]�˳�����" << endl;

		cout << "---------------------------------------------------" << endl;

		cin >> Option;

		switch (Option)

		{

		case '1':

		{

			graph1.Create_Graph();

			graph1.Create_List();

			Option = '0';

			break;

		}

		case '2':

		{

			cout << "��������Ҫ�鿴·�ɱ��·������";

			int i = 0;

			cin >> i;

			cout << endl;

			List *temp = graph1.head;

			temp = graph1.ergodic(temp, i);

			int n = graph1.Vertex_num();

			int j = 0;

			if (temp)

			{

				cout << "|Ŀ���������ڵ�����|\t"

					<< "| ��һ����ַ |\t"

					<< "|����|" << endl; //���� ����

				cout << "---------------------------------------------------" << endl;

				temp->Print(i);

			}

			Option = '0';

			break;

		}

		case '3':

		{

			char Operand = '0';

			while (Operand != 'q')

			{

				cout << "---------------------------------------------------" << endl;

				cout << "��������Ҫ���еĲ���" << endl;

				cout << "[1]�����" << endl;

				cout << "[2]ɾ����" << endl;

				cout << "[q]������һ��" << endl;

				cout << "---------------------------------------------------" << endl;

				cin >> Operand;

				switch (Operand)

				{



				case '1':

				{

					graph1.Insert_edge();

					Operand = '0';

					break;

				}

				case '2':

				{

					graph1.Delete_edge();

					Operand = '0';

					break;

				}

				case 'q':

				{

					break;

				}

				default:

				{

					cout << "������������������" << endl;

					Operand = '0';

					break;

				}

				}

			}

			Option = '0';

			break;

		}

		case '4':

		{

			char Operand = '0';

			while (Operand != 'q')

			{

				cout << "---------------------------------------------------" << endl;

				cout << "��������Ҫ���еĲ���" << endl;

				cout << "[1]����·����" << endl;

				cout << "[2]ɾ��·����" << endl;

				cout << "[q]������һ��" << endl;

				cout << "---------------------------------------------------" << endl;



				cin >> Operand;

				switch (Operand)

				{

					{

				case '1':

				{

					cout << "������Ҫ�����·����" << endl;

					int Ivertex;

					cin >> Ivertex;

					graph1.Insert_vertex(Ivertex);

					Operand = '0';

					break;

				}

				case '2':

				{

					cout << "������Ҫɾ����·����" << endl;

					int Dvertex;

					cin >> Dvertex;

					graph1.Delete_vertex(Dvertex);

					Operand = '0';

					break;

				}

				case 'q':

				{

					break;

				}

				default:

				{

					Operand = '0';

					cout << "������������������" << endl;

					break;

				}

					}

				}

			}

			Option = '0';

			break;

		}

		case 'q':

		{

			return '0';

		}

		default:

		{

			cout << "������������������" << endl;

			Option = '0';

			break;

		}

		}

	}

	return 0;

}