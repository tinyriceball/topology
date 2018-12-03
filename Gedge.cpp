#include "Gedge.h"
int Graph::Insert_edge()
{
	ofstream app;
	app.open("data.txt", ofstream::app);
	if (!app)
	{
		cout << "打开文件失败";
		return -1;
	}
	int num, i, j, k;
	cout << "请输入要增加顶点的个数：\n";
	cin >> num;
	for (i = 0; i < num; i++)
	{
		getchar();
		cout << "请输入需要添加的顶点：";
		cin >> i;
		cout << "请输入另外一个结点：";
		cin >> j;
		if (Save_v[i][j] == 0 || Save_v[i][j] == infinite)
		{
			cout << "请输入两个结点之间的距离：";
			cin >> k;
			app << i;
			app << j;
			app << k;
			cout << "插入成功";
		}
		else
		{
			cout << "输入的信息已存在，输入失败，请重新操作";
			i--;
		}
	}
	app.close();
	return 0;
}

int Graph::Delete_edge()
{
	ifstream infile("data.txt");
	int a[Vertex], b[Vertex], c[Vertex];
	int x = 0;
	int count = 0;
	while (!infile.eof())
	{
		infile >> a[x] >> b[x] >> c[x];
		x++;
		count = x;
	}
	infile.close();
	int start, end;
	cout << "输入你想删除的路径的起始顶点：";
	cin >> start;
	cout << "输入你想删除的路径的终止顶点：";
	cin >> end;
	int f = 0;
	while (f < count)
	{
		if (a[f] == start && b[f] == end)
		{
			c[f] = infinite;
			cout << "删除成功";
			break;
		}
		cout << "输入的路径不存在";
	}
	ofstream outfile("data.txt");
	for (f = 0; c[f] != 0 && c[f] != infinite; f++)
	{
		outfile << a[f] << b[f] << c[f];
	}
	outfile.close();
}
