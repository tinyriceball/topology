#include <iostream>
using namespace std;
#define MAX
class List
{
  public:
    List();
    ~List();
    int Length();
    void Insert();
    void Delete(List,int,int *);
    int Get(List,int,int *);

  private:
    int size;
    int list[MAX];
};
List::List()
{
    size = 0;
};
List::~List(){};
int List::Length(List L)
{
    return L.size;
}

