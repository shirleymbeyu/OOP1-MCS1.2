#include <iostream>

using namespace std;
//KEY FEATURES OF OOP:
//class-> template for an object;
class Rectangle{
    //members of the class:
//Private variables;
int length, width;
//member access specifier(public in this case);
public:
    //functions and methods of the class:
    void setvalues(int l, int w){
    length = l;
    width = w;
    }

    int area(){
    int a;
    a= length*width;
    return a;
    }

    int perimeter(){
    int p;
    p = 2*(length+width);
    return p;
    }
};
int main()
{
    int area,peri;
    //Object-> instance of a class
    Rectangle rect;

    /*direct member access operator(.)-> used to accesss
    public members of a class*/
    rect.setvalues(10,5);

    area= rect.area();
    peri= rect.perimeter();

    cout<<"The area is :" <<area;
    cout<<endl;
    cout<<"The perimeter is:" <<peri;
    cout<<endl;
    return 0;
}
