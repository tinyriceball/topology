#include "list.h"
#include <iostream>
using namespace std;


//��ȡ�����i��λ�õ����ݣ����浽x��  �������ɹ�����1��ʧ�ܷ���0
List::Get(List L, int i, int *x) {
	if (i<0 || i>Length(L) - 1) {
		cout << "ȡ����Ԫ�ز���ʧ��" << endl;
		return 0;
	}
	else {
		*x = L.list[i];//������
		return 1;
	}
}