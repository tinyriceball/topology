#include "Gvertex.h"
#include <iostream>
#include <fstream> 
using namespace std;


//��ͼG�в�����k
void Graph::Insert_vertex(Graph *G, int k){
	//�ı�ߵ��ڽӾ���
	Save_v[k][k] = 0;

	//���ļ���д��k k 0
	fstream fout;
	fout.open("data.txt", ios::out | ios::app);
	fout<< k << " " << k << " " << 0 << endl;
	fout.close();

	cout << "Insert successful."
}



//��ͼG��ɾ�����k
void Graph::Delete_vertex(Graph *G,int k) {
	fin.open("data.txt");
	int i[Vertex], j[Vertex],k[Vertex];
	int counter = 0;
	while (in >> i[c] >> j[c] >> w[c]) {
		c++;
	}
	in.close();
	
	for (int a = 0; a < counter; ++a) {
		if (k == i[a]) goto dele;
	}
	cout << "The vertex could not be found." << endl;
	return;
//ɾ��
dele:
	//���ļ���ɾ��
	ofstream fout("data.txt");
	for (int a = 0; a < c; ++a) {
		if (i[a] == k) continue;
		fout << i[a] << " " << j[a] << " " << w[a] << endl;
	}
	fout.close();
	//���ıߵ��ڽӾ���
	for (int a = 0; a < Vertex; ++a) {
		Save_v[k][a] = infinite;
		Save_v[a][k] = infinite;
	}
		cout<<"Delete successful."
	}

}