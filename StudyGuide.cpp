// File for refresher 
#include <iostream> //files useful for input and output to console
#include <string>
#include <vector>
#include <array>

using namespace std; //includes entire std library; warning:updates in std can cause program errors


int main() // begin program
{
    cout << "learning C++ yay"<< endl; // send string to the console then end the line

    //most common data types
    short shortNum{1};
    int intNum{2};
    float floatNum{3.f};
    double doubleNum{4.f};
    long longNum{};
    long long longLongNum{};
    unsigned short uShortNum{};
    unsigned int uIntNum{};
    unsigned long uLongNum{};
    unsigned long long uLongLongNum{};
    char Char{'y'}; //single quote for single char
    string String{"it be like that"};
    auto autoIntNum{32}; //compiler will declare variable with automatic type deduction.
    bool dayTime{}; //default value is true

    //size in bites of data types
    cout << "short size: " << sizeof(shortNum) << endl;
    cout << "int size: " << sizeof(intNum) << endl;
    cout << "float size: " << sizeof(floatNum) << endl;
    cout << "double size: " << sizeof(doubleNum) << endl;
    cout << "long size: " << sizeof(longNum) << endl;
    cout << "long long size: " << sizeof(longLongNum) << endl;
    cout << "u short size: " << sizeof(uShortNum) << endl;
    cout << "u int size: " << sizeof(uIntNum) << endl;
    cout << "u long size: " << sizeof(uLongNum) << endl;
    cout << "u long long size: " << sizeof(uLongLongNum) << endl;
    cout << "char size: " << sizeof(Char) << endl;
    cout << "String size: " << sizeof(String) << endl;


    /* Explicit type conversion between 2 incompatible types
    Cast epiVolume to a float. Common in random # generation.
    Truncation: discarding the fractional part when a decimal is converted */
    int NarcanVolume{4};
    float NarcanDose{2.f};
    NarcanVolume = static_cast<int>(NarcanDose);
    
    int autoStorage{}; //autoStorage has automatic storage duration meaning it only exists within a set of brackets
    //static int staticStorage{}; //staticStorage has static storage so it exists until the program ends
    thread_local int threadStorage{}; //threadStorage has thread storage duration so each thread can have it own instance of threadStorage.

    //<=> 3 way comparison introduced in C20. returns 0 if values are equal, -1 if 1st is < 2nd, or 1 if 1st > 2nd.
    //auto result = shortNum <=> intNum;

    //bitwise operators perform operations on bits of an int value.


    //ternary operators: condition ? result_if_true : result if false. shorthand if-else statement
    shortNum > intNum ? cout << shortNum : cout << intNum << endl;

    switch(shortNum) //only used with ints and enums
    {
        case 1: cout << "Yes it's " << shortNum << endl;
        break; //break signals to exit the switch statement

        default: cout << "not shortNum" << endl;
        break;
    }


    for (char i : String) // range based for loop. interate through string and stores the elements in i;
    {
        cout << shortNum << endl;
    }

    while(shortNum < 100)
    {
        cout << shortNum;
        shortNum++;
    }

    int studyArray[2][2] {{1,2},{3,4}}; //multidimensional array

    array<int,3>stdarray {1,2,3}; //std array

    vector <int> myVector {1,2,3,4,5}; //dynamic sizing and remember their size

    vector<vector<int>> vector2D (3, vector<int>(10)); //parenthesis initialize the vector; 3 rows and 10 columns of vectors
    vector2D[1][2] = 42;

    cout << String.length() << endl;
    cout << String.append(" sometimes") << endl;

    //variations of random number generation
    unsigned int Time = time(0);
    srand(Time);
    unsigned int rollNum = (rand() % 6) + 1;
    cout << rollNum << endl;

    class People
    {
    public:
        string getHairColor() { return hairColor; }
    private:
        string hairColor{"brown"};

    };

    People Arron;
    cout << Arron.getHairColor() << endl;

    return 0; //end program. compiler would also add by default
}