#include"Gergodic.h"

//��������Ѱ�Ҳ�ѯ�Ľڵ�

List * Graph::ergodic(List *h, int k) {

	while (1) {

		if (k == h->Name) {

			return h;

		}

		else {

			if (h->next == NULL) {

				cout << "��·���������ڣ�" << endl;

				return NULL;

			}

			h = h->next;

		}

	}

}