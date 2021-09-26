#include<bits/stdc++.h>
using namespace std;

class base{
    public:
     void print()
    {
        cout<<"print base class. "<<endl;
    }
    void show()
    {
        cout<<"show base class. "<<endl;
    }
};

class derived : public base{
    public:
    virtual void print()
    {
        cout<<"print derived class. "<<endl;
    }
    void show()
    {
        cout<<"show derived class. "<<endl;
    }
};
int main()
{
    base* obj;
    derived d;
    obj = &d;
    obj->print();
    obj->show();

    return 0;
}