#include "graph.h"
//#include <iostream>
using namespace std;
Graph graph1;
int main()
{
    char option = '0';
    while (option != 'q')
    {
        cout << "---------------------------------------------------" << endl;
        cout << "请输入要进行的操作" << endl;
        cout << "[1]创建拓扑" << endl;
        cout << "[2]查看指定路由器的路由表" << endl;
        cout << "[3]链路增删操作" << endl;
        cout << "[4]路由器增删操作" << endl;
        cout << "[q]退出程序" << endl;
        cout << "---------------------------------------------------" << endl;
        cin >> option;
        switch (option)
        {
        case '1':
        {
            graph1.create_graph();
            graph1.create_list();
            option = '0';
            break;
        }
        case '2':
        {
            cout << "请输入您要查看路由表的路由器：";
            int i = 0;
            cin >> i;
            cout << endl;
            Router *temp = graph1.head;
            temp = graph1.ergodic(temp, i);
            int n = graph1.vertex_num();
            int j = 0;
            if (temp)
            {
                cout << "|目的主机所在的网络|\t"
                     << "| 下一跳地址 |\t"
                     << "|距离|" << endl; //跳数 距离
                cout << "---------------------------------------------------" << endl;
                 temp->print(i);
            }
            option = '0';
            break;
        }
        case '3':
        {
            char operand = '0';
            while (operand != 'q')
            {
                cout << "---------------------------------------------------" << endl;
                cout << "请输入您要进行的操作" << endl;
                cout << "[1]插入链路" << endl;
                cout << "[2]删除链路" << endl;
                cout << "[q]返回上一级" << endl;
                cout << "---------------------------------------------------" << endl;
                cin >> operand;
                switch (operand)
                {

                case '1':
                {
                    graph1.insert_edge();
                    operand ='0';
                    break;
                }
                case '2':
                {
                    graph1.delete_edge();
                    operand = '0';
                    break;
                }
                case 'q':
                {
                    break;
                }
                default:
                {
                    cout << "输入有误，请重新输入" << endl;
                    operand = '0';
                    break;
                }
                }
            }
            option = '0';
            break;
        }
        case '4':
        {
            char operand='0';
            while (operand != 'q')
            {
                cout << "---------------------------------------------------" << endl;
                cout << "请输入您要进行的操作" << endl;
                cout << "[1]新增路由器" << endl;
                cout << "[2]删除路由器" << endl;
                cout << "[q]返回上一级" << endl;
                cout << "---------------------------------------------------" << endl;

                cin >> operand;
                switch (operand)
                {
                    {
                    case '1':
                    {
                        cout << "请输入要插入的路由器" << endl;
                        int Ivertex;
                        cin >> Ivertex;
                        graph1.insert_vertex(Ivertex);
                        operand = '0';
                        break;
                    }
                    case '2':
                    {
                        cout << "请输入要删除的路由器" << endl;
                        int dvertex;
                        cin >> dvertex;
                        graph1.delete_vertex(dvertex);
                        operand = '0';
                        break;
                    }
                    case 'q':
                    {
                        break;
                    }
                    default:
                    {
                        operand = '0';
                        cout << "输入有误，请重新输入" << endl;
                        break;
                    }
                    }
                }
            }
            option = '0';
            break;
        }
        case 'q':
        {
            return '0';
        }
        default:
        {
            cout << "输入有误，请重新输入" << endl;
            option = '0';
            break;
        }
        }
    }
    return 0;
}
