#include "LDelete.h"
#include <iostream>
using namespace std;


//ɾ�������е�i��λ�õ�Ԫ�أ���������x��
List::Delete(List L,int i,int * x) {
	if (Length(L) < 0) {
		cout << "˳���Ϊ�գ�ɾ������ʧ��" << endl;
		return;
	}
	if (i<0 || i>Length(L) - 1) {
		cout << "ɾ��λ�ô��󣬲���ʧ��" << endl;
		return 0;
	
	}else{//ɾ��
		*x = L.list[i];
		for (int j = i + 1; j <= Length(L) - 1; j++) {
			L->list[j - 1] = L->list[j];//ֵ�ĸ���		
		}

		(L->size)--;//���ȼ�һ
		return 1;

	}
}

