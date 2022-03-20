#include <iostream>
using namespace std;
class hack_base
{
    public:
    void hack_func1()
    {
        cout<<"ONE\n";
    }
    virtual void hack_func2()
    {
        cout<<"TWO\n";
    }
    virtual void hack_func3()
    {
        cout<<"THREE\n";
    }
   virtual void hack_func4()
    {
        cout<<"FOUR\n";
    }
};
class hack_derived : public hack_base
{
    public:
    void hack_func1()
    {
        cout<<"1\n";
    }
    void hack_func2()
    {
        cout<<"2\n";
    }
};
int main()
{
    hack_base*p;
    hack_derived obj1;
    p=&obj1;
    p->hack_func1();
    p->hack_func2();
    p->hack_func3();
    p->hack_func4();
}
