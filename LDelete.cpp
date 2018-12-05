#include "LDelete.h"
#include <stdlib.h>

//ɾ��k����·�ɱ�
void List::Delete(List *k)
{
	// if (k->next == NULL)
	// {
	// 	k=NULL;
	// }
	// else
	// {
		k->pre->next=k->next;
		cout<<"x"<<endl;
		k->next->pre =k->pre;
		free(k);
	//}
}