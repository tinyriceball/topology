#include "LInsert.h"

void List::Instert(List *head)
{
	List *a = NULL;
	List *b = NULL;
	a = head;
	while (a != NULL) 
	{
		a = a->next;
	}
	b = new List;
	b = a;
	cout << "插入成功";
}
