#include<iostream>

using namespace std;

class baseclass
{
public:
baseclass()
{
    cout<<"\nIn Base class constructor";
}
~baseclass()
{
    cout<<"\nIn Base class destructor";
}
void somefunc()
{
    cout<<"\n In some function";
}
};
int main()
{
    //baseclass bc[3];
   // bc[0].somefunc();

    baseclass *bcptr[1];
    bcptr[0] = new baseclass();
    bcptr[1] = new baseclass();
    bcptr[0]->somefunc();
    delete bcptr[0];
    delete bcptr[1];
}