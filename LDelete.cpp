#include "LDelete.h"
#include <stdlib.h>

//ɾ��k����·�ɱ�
void List::Delete(List *k) {
	List * p, *l;//ǰ ��
	//���һ��
	if (k->next == NULL) {
		p = k->pre;
		p->next = NULL;
		k->pre = NULL;
		free(k);
	}
	//����λ��ɾ��
	p = k->pre;
	l = k->next;
	p->next = k->pre;
	l->pre = p->next;
	k->pre = NULL;
	k->next = NULL;
	free(k);
}