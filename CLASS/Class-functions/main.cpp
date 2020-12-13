#include <iostream>

using namespace std;
//DEFINING CLASS FUNCTIONS:
class Myclass{
public:
    //inside class definition
    void myMethod(){
    cout<<"Hello world\n";
    }
    void method2();
};
/*outside class definition-> using the scope
resolution operator :: */
void Myclass::method2(){
cout<<"Hi there\n";
}
int main()
{
    Myclass myobj;
    //calling the two functions
    myobj.myMethod();
    myobj.method2();

    return 0;
}
