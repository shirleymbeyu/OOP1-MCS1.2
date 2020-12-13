#include <iostream>

using namespace std;
class Box{
public:
    int length, width, height;
};

int main()
{
  double volume = 0.0;
  Box eclairbox;
  Box flowerbox;

  eclairbox.length = 10;
  eclairbox.width = 7;
  eclairbox.height = 5;
  flowerbox.length = 20;
  flowerbox.height = 10;
  flowerbox.width = 15;

  //volume of eclair box
  volume = eclairbox.length*eclairbox.width*eclairbox.height;
  cout << "The volume of the eclair box is:"<<volume<< endl;
  //volume of flower box
  volume = flowerbox.height*flowerbox.length*flowerbox.width;
  cout<< "The volume of the flower box is:"<<volume<<endl;
  return 0;
}
