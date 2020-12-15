#include <iostream>

using namespace std;
/*CONSTRUCTORS ->a special method that's automatically called
when an object of a class is created*/
class Myclass{
public:
    //Has same name as the class;
    Myclass(){
    cout<<"Hello world!"<< endl;
    }
};
int main()
{
//This will call the constructor:
Myclass myobj;
return 0;
}
