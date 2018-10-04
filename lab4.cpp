#include <iostream>
#include <string>
// Include the library that will allow you to convert from string to integer
#include <sstream>

int main() {
  int a,b,c,d;
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  std::cout <<"Enter any Three Numbers:" <<std::endl;// Ask the user for 3 integers as input
   std::cin >>a>>b>>c;// The user should enter all integers on the same line, pressing enter only once






 d=a*b*c; // Multiply the three integers





  std::cout<<"result of the Multiplication "<<d<< std::endl;// Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std::string groundwater;
std::string toad;
std::getline (std::cin,groundwater);
std::cout<<"the name of groundwater:  "<<std::endl;
std::getline (std::cin,groundwater);
std::cout<<"name of toad:   "<<std::endl;
std::getline(std::cin,toad );
 std::cout<<"An old silent "<<groundwater<<"..."<<std::endl;
 std::cout<<"A "<<toad<<" jumps into the river,\nsplash! Silence again."<<std::endl;







   /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
int myint;
  std::stringstream (myNumber)>>myint;

  
  std::cout<<myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}