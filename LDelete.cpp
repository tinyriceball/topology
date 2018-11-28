#include "LDelete.h"
#include <iostream>
using namespace std;


//删除链表中第i个位置的元素，并储存在x中
List::Delete(List L,int i,int * x) {
	if (Length(L) < 0) {
		cout << "顺序表为空，删除操作失败" << endl;
		return;
	}
	if (i<0 || i>Length(L) - 1) {
		cout << "删除位置错误，操作失败" << endl;
		return 0;
	
	}else{//删除
		*x = L.list[i];
		for (int j = i + 1; j <= Length(L) - 1; j++) {
			L->list[j - 1] = L->list[j];//值的覆盖		
		}

		(L->size)--;//表长度减一
		return 1;

	}
}

