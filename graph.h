#include <iostream>

#include <fstream>

#include "List.h"

#include <string.h>

using namespace std;

#define infinite 10000000

class Graph

{

public:

	Graph();

	~Graph();

	void Create_Graph();

	void Create_List();

	void Dijkstra(int v, List *node); //���·��

	void List_Refresh(string list);   //����·�ɱ�

	void Insert_vertex(int k);        //����ڵ�

	void Delete_vertex(int k);        //ɾ���ڵ�

	void Insert_edge();               //�����

	void Delete_edge();               //ɾ����

	void Dijkstra(int v);             //���·��

	int Get(int i, int j);            //��þ�����Ԫ�ص���Ϣ

	bool Vertex_Verify(int i);        //�ڵ��Ƿ����

	int Vertex_num();

	void Refresh_List(); //����ˢ��

	List *ergodic(List *node, int k);

	List *head;



private:

	int Save_v[Vertex][Vertex];

	int vertex;

};