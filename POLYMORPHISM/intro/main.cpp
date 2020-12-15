#include <iostream>
/*POLYMORPHISM-> where calls to a member function
will cause a different function depending on the
object that invokes the function.Occurs when we have
many classes related to each other by inheritance*/
using namespace std;

/*Different classes have a function of the same name
and parameters but different implementations*/
class Animal{
public:
    void animalSound(){
    cout<<"The animal makes a sound\n";
    }
};

class Pig: public Animal{
public:
    void animalSound(){
    cout<<"The pig says: wee wee\n";
    }
};

class Dog: public Animal{
public:
    void animalSound(){
    cout<<"The dog says: bow wow\n";
    }
};
int main()
{   Animal myanimal;
    Pig mypig;
    Dog mydog;
//The dog and pig objects override the function.
    myanimal.animalSound();
    mypig.animalSound();
    mydog.animalSound();
    return 0;
}
