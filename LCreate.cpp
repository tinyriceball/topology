#include "LCreate.h"
void Graph::Create_List()
{
    List *temp = NULL;
    List *cur = NULL;
    cur = head;
    int v_num = Vertex_num(); //未操作节点数
    int router = 1;
    do
    {
        cur->next = new List;
        temp = cur;
        cur = cur->next;
        cur->pre = temp; //链表前后节点连接操作
        temp->next = cur;
        cur->Name = router;
        if (Vertex_Verify(router))
        {
            Dijkstra(router, cur); //调用最短路径算法
            v_num--;               //未操作节点数-1

        } //给当前路由表赋值
        router++;
    } while (v_num);
};