#include "List.h"
List::List()
{
    Name = -1;
    Distance[0] = 0;
    Next_Jump[0] = 0;
    pre = NULL;
    next = NULL;
};
List::~List(){};
void List::Refresh(int des, int dist, int next)//赋值函数
{
    Distance[des] = dist;
    Next_Jump[des] = next;
};
void List::Print(int v_num)
{

    for (int vert = 0; vert < Vertex; vert++)
    {
        if (Distance[vert] != 0 && Next_Jump[vert] != 0)//当前路径是否存在
        {
            cout << "   |  " << vert << ".x.x.x  |      ";
            if (Next_Jump[vert] == -1)
            {
                cout
                    << "|  直接交付  |      " << Distance[vert] << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            else
            {
                cout << "|  " << Next_Jump[vert] << ".x.x.x   |      " << Distance[vert] << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            v_num--;
        }
    }
}