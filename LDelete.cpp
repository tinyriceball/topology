#include "LDelete.h"


//删除k结点的路由表
void List::Delete(List *k) {
	List * p, *l;//前 后

	//最后一个
	if (k->next = NULL) {
		p = k->pre;
		p->next = NULL;
		k->pre = NULL;
		free(k);

	}

	//其他位置删除
	p = k->pre;
	l = k->next;
	p->next = k->pre;
	l->pre = p->next;
	k->pre = NULL;
	k->next = NULL;
	free(k);

}