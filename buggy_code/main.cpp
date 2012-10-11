#include <iostream>

using namespace std;

class Object
{
public:
  int value;
  Object(int v):value(v){}
};

class Factory
{
public:
  Object& getObject()
  {
    Object o(20);
    return o;
  }
};


int main()
{
  Factory f;
  Object o = f.getObject();
  cout << o.value << endl;
}
