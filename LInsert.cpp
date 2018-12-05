#include "LInsert.h"

void List::Instert(List *head, int router)
{
	List *a = NULL;
	List *b = NULL;
	a = head;
	while (a->next != NULL)
	{
		a = a->next;
	}
	b = new List;
	b->pre = a;
	a->next = b;
	b->Name = router;
	cout<< "插入成功" << endl;
}
