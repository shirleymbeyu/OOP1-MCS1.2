#include <iostream>

using namespace std;

class Triangle{
int base, height, hyp;
public:
    void setvalues(int l, int h, int b){
    base=b;
    height=h;
    hyp=h;
    }

    int area(){
    int a;
    a= (base*height)/2;
    return a;
    }

    int perimeter(){
    int p;
    p= base+height+hyp;
    return p;
    }
};

int main()
{
int area,peri;
Triangle tri;
tri.setvalues(7,3,5);
area = tri.area();
peri= tri.perimeter();

cout<<"The area is:" <<area <<endl;
cout<<"The perimeter is:" <<peri <<endl;
return 0;
}
