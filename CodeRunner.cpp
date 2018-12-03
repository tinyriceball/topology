#include "graph.h"
#include <iostream>
using namespace std;
Graph graph1;
int main()
{
    while (1)
    {
        char Option = 0;
        cout << "请输入要进行的操作" << endl;
        cout << "[1]创建拓扑" << endl;
        cout << "[2]查看路由表" << endl;
        cout << "[3]边操作" << endl;
        cout << "[4]节点操作" << endl;
        cout << "[q]退出程序" << endl;
        cin >> Option;
        while (Option)
        {
            switch (Option)
            {
            case '1':
            {
                graph1.Create_Graph();
                graph1.Create_List();

                Option = 0;
                break;
            }
            case '2':
            {
                cout << "请输入您要查看路由表的路由器：";
                int i = 0;
                cin >> i;
                cout << endl;
                cout << "|目的主机所在的网络|  "
                     << "| 下一跳地址 |    "
                     << "|距离|" << endl; //跳数 距离
                cout << "---------------------------------------------------" << endl;
                List *temp = graph1.head;
                temp = graph1.ergodic(temp, i);
                int n = graph1.Vertex_num();
                int j = 0;
                temp->Print(i);
                Option = 0;
                break;
            }
            case '3':
            {
                char Operand;
                cout << "请输入您要进行的操作" << endl;
                cout << "[1]插入边" << endl;
                cout << "[2]删除边" << endl;
                cout << "[q]返回上一级" << endl;
                cin >> Operand;
                switch (Operand)
                {
                    {
                    case '1':
                    {
                        graph1.Insert_edge();
                        break;
                    }
                    case '2':
                    {
                        graph1.Delete_edge();
                        break;
                    }
                    case 'q':
                    {
                        break;
                    }
                    default:
                    {
                        cout << "输入有误，请重新输入" << endl;
                        break;
                    }
                    }

                    break;
                }
            case '4':
            {
                char Operand;
                cout << "请输入您要进行的操作" << endl;
                cout << "[1]插入点" << endl;
                cout << "[2]删除点" << endl;
                cout << "[q]返回上一级" << endl;
                cin >> Operand;
                switch (Operand)
                {
                    {
                    case '1':
                    {
                        cout << "请输入要插入的结点号" << endl;
                        int Ivertex;
                        cin >> Ivertex;
                        //graph1.Insert_vertex(Ivertex);
                        break;
                    }
                    case '2':
                    {
                        cout << "请输入要删除的结点号" << endl;
                        int Dvertex;
                        cin >> Dvertex;
                        // graph1.Delete_vertex(Dvertex);
                        break;
                    }
                    case 'q':
                    {
                        break;
                    }
                    default:
                    {
                        cout << "输入有误，请重新输入" << endl;
                        break;
                    }
                    }
                    break;
                }
            case 'q':
            {
                return 0;
            }
            default:
            {
                cout << "输入有误，请重新输入" << endl;
                break;
            }
            }
            }
                return 0;
            }
        }
    }
}