#include "List.h"
List::List()
{
    Name = -1;
    Cur_List[0] = 0;
    Next_Jump[0] = 0;
    pre = NULL;
    next = NULL;
};
List::~List(){};
void List::Refresh(int des, int dist, int next)
{
    Cur_List[des] = dist;
    Next_Jump[des] = next;
};
void List::Print(int v_num)
{

    for (int vert = 0; vert < Vertex; vert++)
    {
        if(Cur_List[vert]!=0)
        {
            cout << "   |  " << vert << ".x.x.x  |      ";
            if (Next_Jump[vert] == -1)
            {
                cout
                    << "|  直接交付  |      " << Cur_List[vert] << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            else
            {
                cout << "|  " << Next_Jump[vert] << ".x.x.x   |      " << Cur_List[vert] << "  |" << endl; // 距离
                cout << "---------------------------------------------------" << endl;
            }
            v_num--;
        }
    }
}