#include <iostream>

using namespace std;
/*exception-> occurs when there's an error and
C++ stops and generates an error message*/
int main()
{
    try{
    int age=15;
    if (age>18){
        cout<<"Access granted- you are old enough";
    }
    else{
        throw(age);
    }
}
    catch (int myNum){
    cout<<"Access denied-You must be at least 18 years old\n";
    cout<<"Age is:"<<myNum;
    }
    return 0;
}
