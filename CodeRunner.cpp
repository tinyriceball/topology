#include "graph.h"
#include "list.h"
#include <iostream>
using namespace std;
Graph graph1;
int main()
{
    char Option = 0;
    cout << "请输入要进行的操作" << endl;
    cout << "[1]创建拓扑" << endl;
    cout << "[2]输出路由表" << endl;
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
            graph1.Create();
            break;
        }
        case '2':
        {
            break;
        }
        case '3':
        {
            char Operand;
            cout << "请输入您要进行的操作" << endl;
            cout << "[1]插入边" << endl;
            cout << "[2]删除边" << endl;
            cout << "[q]返回上一级" << endl;
            cin>>Operand;
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
                    graph1.Insert_vertex();
                    break;
                }
                case '2':
                {
                    graph1.Delete_vertex();
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