#include <iostream>
using namespace std;
 
//Testing out moving around variabled

class Car {
  public:
    string color(string carColor);
    string adjective();
};

string Car::adjective() {
  string word= "sad";
  return word;
};

string Car::color(string carColor) {
  Car myObj;
  carColor = "yellow";
  string output = myObj.adjective() + " " + carColor;
  return output;
};

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.color("") + "\n";
  return 0;
}