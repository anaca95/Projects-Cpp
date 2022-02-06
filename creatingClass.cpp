#include<stdlib.h>
#include<stdio.h>
#include<string>
#include <iostream>
using namespace std;

class myClass{
    public: //define that methods and attributes are visible outside the class
        int myNumber;
        std::string myString;

};

int main(){
    myClass myObj; //Create an object of class myClass
    
    // Access attributes and set values
    myObj.myNumber = 15;
    myObj.myString = "hello";

    //Print attribute values
   std:: cout << myObj.myNumber << "\n";
   std:: cout <<myObj.myString;

   // Or print using printf:
   //printf("%d",myObj.myNumber);
   //printf("%s", myObj.myString);
    return 0;
}