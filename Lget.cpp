#include "Lget.h"



//取k结点的路由表
List * List::Getlist(List *h, int k) {

	while (1) {
		if (k == h->Name) {
			return h->pre;
		}
		else {
			h = h->next;
		}
	}

}