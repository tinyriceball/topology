#ifndef LIST_H

#define LIST_H

#define Vertex 30

#include <iostream>

using namespace std;

#define MAX 100

class List

{

public:

	int Name;

	List *pre;

	List *next;

	void Refresh(int des, int dist, int next); //ˢ�µ�ǰ���������

	void Delete(List *k);                      //ɾ����ǰ�ڵ�

	void Instert(List *head, int router);      //����ڵ�

	void Print(int v_num);                     //�����ǰ·�ɱ�

	void Originate();

	List();

	~List();



private:

	int Distance[MAX];  //��̾���

	int Next_Jump[MAX]; //��һ��

};

#endif