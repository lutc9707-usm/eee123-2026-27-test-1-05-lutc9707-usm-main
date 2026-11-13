/*Test 1 - Question 4 (Set 05)*/
/*Name: LU TIANCI*/
/*USM Email: lutc9707@student.usm.my*/
/*GitHub Username: lutc9707-usm*/
/*Matric No.: 26105668*/

#ifdef AUTOGRADE                                        //DO NOT EDIT OR REMOVE
    #define CATCH_CONFIG_RUNNER                         //DO NOT EDIT OR REMOVE
    #include "catch.hpp"                                //DO NOT EDIT OR REMOVE
    int runCatchTests(int argc, char* const argv[]){    //DO NOT EDIT OR REMOVE
        return Catch::Session().run(argc, argv);}       //DO NOT EDIT OR REMOVE
#endif                                                  //DO NOT EDIT OR REMOVE
#include <cmath>
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
    
    double xd = static_cast<double>(x);
    double numerator = 6.0 * xd * xd * xd * xd - 3.0 * xd - 8.0;
    double denominator = std::fabs(9.0 - xd * xd * xd) + std::sqrt(4.0 * xd * xd + 13.0);
    result = (3.0 / 5.0) * (numerator / denominator);//write your code below

    return result;
}
