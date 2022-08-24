/// This lecture is about variables' type
// Binary representation: For numbers with:
                        // Binary
// 1 digit: range = 0-1  -- 0, 1
// 2 digits: range = 0-3 -- 00,01,10, 11
// 3 digits: range = 0-7 -- 000, 001, ..., 111
// and so on

// Digits         Bytes    Data Range
// 8                1           0-255
// 16               2           0-65.535
// 32               4           0-34.359.738.367
// 64               8           0-18 *10^5...

// Different data represenation in cpp (after cpp14)
#include <iostream>
#include <ionmanip>

int main(){
int number1 = 15;    // Interpret as Decimal
int number2 = 017;   // Interpret as Octal
int number3 = 0x0F;  // Interpret as Hexadecimal
int number4 = 0b00001111;  // Interpret as Binary

std::cout << "Number 1 is: " << number1 << std::endl;
std::cout << "Number 2 is: " << number2 << std::endl;
std::cout << "Number 3 is: " << number3 << std::endl;
std::cout << "Number 4 is: " << number4 << std::endl;

return 0;
}

void declare_variable(){
//--------------------------------
// Variables braced initialization

// initializing an integer (Uses always 4 Bytes of memory)
int my_variable_3;    // Avoid this because the compilers can put everything it wants to set a fake "zero"
int my_variable{};  // Initializes to zero
int my_variable2 {10};   // Initializes to 10
// Using expressions as initializer
int number_of_variables {my_variable + my_variable2};

// Don't ever initialize an int with a non-integer
int conversion_variable {2.9};  //float is bigger than int


// Initializing with assignments
int bike_count = 2;
int truck_count = 5;
int vehicles_count = bike_count + truck_count;


// Size of a type in memory
std::cout << "Size of int: " << sizeof(int) << std::endl;
std::cout << "Size of truck " <<sizeof(truck_count) << std::endl;
std::cout << "my_variable_1 " <<sizeof(my_variable) << std::endl;
std::cout << "my_variable_2 " <<sizeof(my_variable2) << std::endl;
std::cout << "my_variable_3 " <<sizeof(my_variable_3) << std::endl;
}



// -------------
void integers_modifiers(){
// Integer Modifiers(signed or unsigned (sinal)), don't change the size of the variables type
// to store negative numbers, the range of 4 Bytes is divided in a + and a - side, which in size is equal to the unsigned range

// example
// signed variable can store both + and - numbers
short my_var {-200};    // 2 Bytes (short)
short int my_var2 {200};    // 2 Bytes (short)
signed short int my_var3 {122}; // 2 Bytes (short)
unsigned short int my_var4 {456};   // 2 Bytes (short)

std::cout << "my_var " << sizeof(my_var) << std::endl;
std::cout << "my_var2 " << sizeof(my_var2) << std::endl;
std::cout << "my_var3 " << sizeof(my_var3) << std::endl;
std::cout << "my_var4 " << sizeof(my_var4) << std::endl;

// Long variables  4 OR 8 Bytes
long long_var1 {55};
long int long_var2 {40};
signed long int long_var3 {67};
unsigned long int long_var4 {20};

std::cout << "long_var1 " << sizeof(long_var1) << std::endl;
std::cout << "long_var2 " << sizeof(long_var2) << std::endl;
std::cout << "long_var3 " << sizeof(long_var3) << std::endl;
std::cout << "long_var4 " << sizeof(long_var4) << std::endl;
}



//-----------------------
// Fractional Numbers

// Float size = 4 bytes
// Double size = 8 bytes
// Long Double size = 12 bytes
// #include <ionmanip>  //library to precision??
void fractional_numbers(){

double number1 {12123456789};
double number2 {1.2123456789e6}; //the same as number1 but fills with zero
long double number3 {1.234567890L};
float number4 {1.234567890f};   // The f in the end says it is a float
// Ex: 1.F is a float with a decimal place
float var_float1{1.F};
float var_float2{1.0F};

std::cout << "Number1 " << number1 << std::endl;
std::cout << "Number2 " << number2 << std::endl;
std::cout << "Number3 " << number3 << std::endl;
std::cout << "Number4 " << number4 << std::endl;
std::cout << "var_float1 " << var_float1 << std::endl;
std::cout << "var_float2 " << var_float1 << std::endl;

std::cout << "Size of Number1 " << sizeof(number1) << std::endl;
std::cout << "Size of Number2 " << sizeof(number2) << std::endl;
std::cout << "Size of Number3 " << sizeof(number3) << std::endl;
std::cout << "Size of Number4 " << sizeof(number4) << std::endl;
std::cout << "Size of var_float1 " << sizeof(var_float1) << std::endl;
std::cout << "Size of var_float2 " << sizeof(var_float2) << std::endl;

}


//--------------------------
// Booleans (8 bits of memory (1 Byte), because they only store two states!)

void booleans_function(){

bool red_light {true};
bool green_light {false};

//This
/*if(red_light == true){
    std::cout << "Stop" << std::endl;
}
else{
    std::cout << "Go ahead!" << std::endl;
}*/

// is the same as
if(green_light){
    std::cout << "Go ahead!" << std::endl;
}
else{
     std::cout << "Stop" << std::endl;
}

}


//---------------------------
//Characters And Text

void char_and_text(){

char charact1 {'Ana'};
char charact2 = 65;  // will be stored as a character

std::cout << charact1 << std::endl;
std::cout << charact2 << std::endl;

// static cast transforms btw data types
std::cout << "Value of char: " << static_cast<int>(charact2) << std::endl; //will interpret now whatever is inside of the variable as integer

}



//---------------------
// Auto

// Let the compiler deduce the type of the variable
void auto_variables(){

auto var1 {12}; // Interpret as integer
auto var2 {12.0}; // Interpret as double
auto var3 {12.F}; // Interpret as float
auto var4 {12.L}; // Interpret as long double
auto var5 {'12'}; // Interpret as character

auto var6 {12u}; // Interpret as unsigned int
auto var7 {12ul}; // Interpret as unsigned long
auto var8 {12ll}; // Interpret as long long

std::cout << "var1 occupies: " << sizeof(var1) << "bytes" std::endl;

std::cout << "var2 occupies: " << sizeof(var2) << "bytes" std::endl;

std::cout << "var3 occupies: " << sizeof(var3) << "bytes" std::endl;

std::cout << "var4 occupies: " << sizeof(var4) << "bytes" std::endl;

std::cout << "var5 occupies: " << sizeof(var5) << "bytes" std::endl;

std::cout << "var6 occupies: " << sizeof(var6) << "bytes" std::endl;

std::cout << "var7 occupies: " << sizeof(var7) << "bytes" std::endl;

std::cout << "var8 occupies: " << sizeof(var8) << "bytes" std::endl;


// Assignments with Auto type

// keeps the deduced type, can't receive a value from another type later
//Ex:
// auto var_teste {333u};
// later
// var_teste = -22;     //Illegal!
}

