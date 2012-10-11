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
    Object *o;
    Object* getObject()
    {
        o=new Object(20);
        return o;
    }
    
    ~Factory()
    {
        cout << "Factory desctructor" << endl;
        delete o;
    }
};


int main()
{
  Object* o;
  {
    Factory f;
    o = f.getObject();
  }
  cout << o->value << endl;
}

