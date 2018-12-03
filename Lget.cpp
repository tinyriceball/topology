#include "Lget.h"
//ȡk����·�ɱ�
List * List::Getlist(List *h, int k) {

	while (1) {
		if (k == h->Name) {
			return h;
		}
		else {
			h = h->next;
		}
	}

}