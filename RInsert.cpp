#include "RInsert.h"

void Router::instert_list(Router *head, int router)
{
	Router *a = NULL;
	Router *b = NULL;
	a = head;
	while (a->next != NULL)
	{
		a = a->next;
	}
	b = new Router;
	b->pre = a;
	a->next = b;
	b->Name = router;
	cout<< "插入成功" << endl;
}
