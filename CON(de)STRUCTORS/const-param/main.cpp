#include <iostream>

using namespace std;
/*constructor parameters-> parameters used for setting
initial values for certain member attributes*/
class Car{
public:
    string brand;
    string model;
    int year;

    car(string x, string y, int z){
      brand = x;
      model = y,
      year = z;
      }
};

int main()
{
   Car carobj1("BMW", "X5", 1999);
   cout << carobj1.brand <<" " <<carobj1.model<< carobj1.year<<endl;
   return 0;
}
