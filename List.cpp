#include "List.h"
#include <string.h>
List::List()
{
    Name = -1;
    memset(Distance, 0, Vertex);
    memset(Next_Jump, 0, Vertex);
    pre = NULL;
    next = NULL;
};
List::~List(){};
void List::Refresh(int des, int dist, int next) //赋值函数
{
    Distance[des] = dist;
    Next_Jump[des] = next;
};
void List::Originate()
{
    memset(Distance, 9999999, sizeof(int) * Vertex);
    memset(Next_Jump, 0, sizeof(int) * Vertex);
};
void List::Print(int v_num)
{
    for (int vert = 1; vert < Vertex; vert++)
    {
        if (Distance[vert] != 9999999 && Next_Jump[vert] != 0) //当前路径是否存在
        {
            cout << "   |  " << vert << ".x.x.x        ";
            if (Distance[vert] == 0)
            {
                cout
                    << "|  直接交付  |   " << 0 << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            else
            {
                cout << "|  " << Next_Jump[vert] << ".x.x.x      |   " << Distance[vert] << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            v_num--;
        }
    }
}