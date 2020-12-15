#include <iostream>

using namespace std;
/*ENCAPSULATION-> Concept that binds together
the data and function that manipulate the
data hence keeping safe from outside interference.
Making sure 'sensitive' data is hidden from user
by declaring the class variable or attribute as
private*/
class Employee{
private:
    int salary;
public:
    /*Public get and set methods used to read or
modify the private value*/
    void setsalary(int s){
            salary = s;
            }

    int getsalary(){
           return salary;
           }
};

int main()
{   Employee liz;
    liz.setsalary(50000);
    cout << liz.getsalary()<< endl;
    return 0;
}
