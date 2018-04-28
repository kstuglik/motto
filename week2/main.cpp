#include <iostream>
#include<cmath>
#include<chrono>

using namespace std;

#include "binaryrepresentation.h"
#include "ackermanfunction.h"
#include "otherfunction.h"

class c1{
    int x;
    int z;
    long y;
};

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    binaryRepresentation(123456789);
    cout<<"ackerman(1,1) = "<<ackerman(1,1)<<endl;
    cout<<"5! = "<<fact(5)<<endl;

    otherThings();


    return 0;
}
