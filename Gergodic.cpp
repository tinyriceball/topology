#include"Gergodic.h"
//遍历链表寻找查询的节点
List * Graph::ergodic(List *h,int k) {
	while (1) {
		if (k == h->Name) {
			cout << "杨雯绚" << endl;
			return h;
		}
		else {
			if (h->next == NULL) {
				cout << "该路由器不存在！" << endl;
				cout << "杨雯绚" << endl;
				return NULL;
			}
			h = h->next;
		}
	}
}
