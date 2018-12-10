#include "LCreate.h"

void Graph::Create_List()

{

	List *temp = NULL;

	List *cur = NULL;

	cur = head;

	int v_num = Vertex_num(); //δ�����ڵ���

	int router = 1;

	do

	{

		cur->next = new List;

		temp = cur;

		cur = cur->next;

		cur->pre = temp; //����ǰ��ڵ����Ӳ���

		temp->next = cur;

		cur->Name = router;

		if (Vertex_Verify(router))

		{

			Dijkstra(router, cur); //�������·���㷨

			v_num--;               //δ�����ڵ���-1



		} //����ǰ·�ɱ�ֵ

		router++;

	} while (v_num);

};