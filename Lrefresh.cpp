#include "Lrefresh.h"
void Graph::List_Refresh(int list)
{
    List *temp = NULL;
    temp = head;
    do
    {
        if (temp->Name == list)
        {
            Dijkstra(list, temp);
        }

    } while (temp);
};