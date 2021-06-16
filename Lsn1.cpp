#include <iostream>

using namespace std;

class sampleclass
{
private:
    sampleclass()
    {
        cout<<"\nBase class Constructor";
    }
    void sampleprint()
    {
        cout<<"\nIn the print function of base class";
    }
   // friend class derivedclass;
public:
  static sampleclass* myfunc()
  {
      return new sampleclass();
  }

};
class derivedclass
{
    public:
    derivedclass()
    {
        cout<<"\nDerived Class constructor";
    }

};

int main()
{
    //sampleclass *ss = new sampleclass();
    //ss->sampleprint();
    //derivedclass dc = derivedclass();
    sampleclass *ss;
    ss = sampleclass::myfunc();
    delete ss;
    cout <<"\nHello world";
}