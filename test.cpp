#include<iostream>
using namespace std;
  
class Base
{
public:
    virtual void show() = 0;
};
  
class Derived: public Base
{
public:
    void show() { cout << "In Derived \n"; }
    void print(){cout << "In jfid \n"; }
};
  
int main(void)
{
    Base *bp = new Derived();
    bp->show();
    bp.print();
    return 0;
}