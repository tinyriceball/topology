#include "List.h"
#include <string.h>
Router::Router()
{
    Name = -1;
    memset(distance, 0, Vertex);
    memset(next_jump, 0, Vertex);
    pre = NULL;
    next = NULL;
};
Router::~Router(){};
void Router::assign(int des, int dist, int next) //赋值函数
{
    distance[des] = dist;
    next_jump[des] = next;
};
void Router::originate()
{
    memset(distance, 9999999, sizeof(int) * Vertex);
    memset(next_jump, 0, sizeof(int) * Vertex);
};
void Router::print(int v_num)
{
    for (int vert = 1; vert < Vertex; vert++)
    {
        if (distance[vert] != 9999999 && next_jump[vert] != 0) //当前路径是否存在
        {
            cout << "   |  " << vert << ".x.x.x        ";
            if (distance[vert] == 0)
            {
                cout
                    << "|  直接交付  |   " << 0 << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            else
            {
                cout << "|  " << next_jump[vert] << ".x.x.x      |   " << distance[vert] << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            v_num--;
        }
    }
}