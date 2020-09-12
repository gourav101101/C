#include <iostream>
using namespace std;
class A
{
public:
  virtual void show() = 0;
};
void A ::show()
{
  cout << "Class A";
}
class B : public A
{
public:
  void show()
  {
    cout << "Class B";
  }
};
int main()
{
  A *a;
  B b;
  a = &b;
  a->show();

  return 0;
}
