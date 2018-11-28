#include <iostream>
using namespace std;
#define MAX 500
class List
{
  public:
    List();
    ~List();
    int Length();
    void Insert();
    void Delete();
    int Get();

  private:
    int size;
    int list[MAX];
};
List::List()
{
    size = 0;
};
List::~List(){};
int List::Length()
{
    return size;
}