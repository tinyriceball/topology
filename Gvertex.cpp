#include "Gvertex.h"
#include <iostream>
#include <fstream> 
using namespace std;


//向图G中插入结点k
void Graph::Insert_vertex(Graph *G, int k){
	//改变边的邻接矩阵
	Save_v[k][k] = 0;

	//在文件中写入k k 0
	fstream fout;
	fout.open("data.txt", ios::out | ios::app);
	fout<< k << " " << k << " " << 0 << endl;
	fout.close();

	cout << "Insert successful."
}



//在图G中删除结点k
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
//删除
dele:
	//在文件中删除
	ofstream fout("data.txt");
	for (int a = 0; a < c; ++a) {
		if (i[a] == k) continue;
		fout << i[a] << " " << j[a] << " " << w[a] << endl;
	}
	fout.close();
	//更改边的邻接矩阵
	for (int a = 0; a < Vertex; ++a) {
		Save_v[k][a] = infinite;
		Save_v[a][k] = infinite;
	}
		cout<<"Delete successful."
	}

}