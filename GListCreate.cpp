#include "GListCreate.h"
void Graph::create_list()
{
    Router *temp = NULL;
    Router *cur = NULL;
    cur = head;
    int v_num = vertex_num(); //未操作节点数
    int router = 1;
    do
    {
        cur->next = new Router;
        temp = cur;
        cur = cur->next;
        cur->pre = temp; //链表前后节点连接操作
        temp->next = cur;
        cur->Name = router;
        if (vertex_verify(router))
        {
            dijkstra(router, cur); //调用最短路径算法
            v_num--;               //未操作节点数-1

        } //给当前路由表赋值
        router++;
    } while (v_num);
};