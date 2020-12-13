#include <iostream>

using namespace std;
//CLASS TO CLAS INHERITANCE
//base class-> an existing class
class Shape{
public:
    void set_length(int l){
    length = l;}
    void set_width(int w){
    width = w;}
protected:
    int length, width;
};

class Rectangle: public Shape{
public:
    int getArea(){
    return (length*width);
    }
};

int main()
{
  Rectangle rect;
  rect.set_length(10);
  rect.set_width(5);

  //rectangle's area
  cout << "The area is: "<<rect.getArea()<< endl;
  return 0;
}
