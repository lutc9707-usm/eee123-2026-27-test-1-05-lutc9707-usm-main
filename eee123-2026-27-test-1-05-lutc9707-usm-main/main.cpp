/*Test 1 - Question 4 (Set 05)*/
/*Name: Write your full-name here*/
/*USM Email: abc123@student.usm.my*/
/*GitHub Username: abc123*/
/*Matric No.: 987654*/

#ifdef AUTOGRADE                                        //DO NOT EDIT OR REMOVE
    #define CATCH_CONFIG_RUNNER                         //DO NOT EDIT OR REMOVE
    #include "catch.hpp"                                //DO NOT EDIT OR REMOVE
    int runCatchTests(int argc, char* const argv[]){    //DO NOT EDIT OR REMOVE
        return Catch::Session().run(argc, argv);}       //DO NOT EDIT OR REMOVE
#endif                                                  //DO NOT EDIT OR REMOVE

#include "main.hpp"                                     //DO NOT EDIT OR REMOVE
#include <iostream>
#include <iomanip>
//Add any other required header file(s)

using namespace std;

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #ifdef AUTOGRADE                                    //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
    int x;
    double y;

    for (;;)
    {
        cout << "Type an integer value (+/-) for x: ";
        cin >> x;
        y = formula(x);
        cout << fixed << setprecision(5) << y << endl;
    }

    return 0;
}

double formula(int x)                                   //DO NOT EDIT OR REMOVE
{
    double result = 0;
    //write your code below

    return result;
}
