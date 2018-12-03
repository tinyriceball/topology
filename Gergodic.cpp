#include"Gergodic.h"

//遍历找到k结点，返回k结点的路由表
List * Graph::ergodic(List *h,int k) {
	
	while (1) {
		if (k == h->Name) {
			return h;
		}
		else {
			if (h->next == NULL) {
				cout << "The node could not be found." << endl;
				return NULL;
			}
			h = h->next;
		}
	}
}