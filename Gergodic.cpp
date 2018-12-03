#include"Gergodic.h"
//�����ҵ�k��㣬����k����·�ɱ�
List * Graph::ergodic(List *h,int k) {
	while (1) {
		if (k == h->Name) {
			cout << h->Name << endl;

			return h;
		}
		else {
			if (h->next == NULL) {
				cout << h->Name << endl;

				cout << "The node could not be found." << endl;
				return NULL;
			}
			h = h->next;
		}
	}
}