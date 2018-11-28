#include "list.h"
#include <iostream>
using namespace std;


//读取链表第i个位置的数据，储存到x中  若操作成功返回1，失败返回0
List::Get(List L, int i, int *x) {
	if (i<0 || i>Length(L) - 1) {
		cout << "取数据元素操作失败" << endl;
		return 0;
	}
	else {
		*x = L.list[i];//存数据
		return 1;
	}
}