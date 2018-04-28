#include <iostream>
#include<cmath>
#include <fstream>
#include<chrono>
using namespace std;

int fib(int n){
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}

unsigned long fact(unsigned long n){
    if(n<0)
        return -1;
    if(n==0 || n==1)
        return 1;
    if(n>1)
        return n * fact(n-1);
}

void otherThings(){
    unsigned long x = 0xFFFFFFFFFFFFFFFF;
    double xx = x;
    cout<<"przejscie z long->double dla 0xFFFFFFFFFFFFFFFF: "<<xx<<endl;
    printf("a teraz to samo przy uzyciu printf %ud: \n",&xx);
    unsigned int xxx = 123456789;
    cout<<xxx<<endl;
    xx = xxx;
    cout<<xx<<endl;

    using ns = chrono::nanoseconds;
    using get_time = chrono::steady_clock;
    ofstream myfile;

    myfile.open ("result.txt");
    //myfile.open ("result2.txt");

    for(int i=0;i<=25;i++){
        auto start = get_time::now();
        myfile <<i<<" : "<< fib(i);
        //myfile <<i<<" : "<< fact(i);
        auto end = get_time::now();
        auto diff = end - start;
        myfile << " : "<< chrono::duration_cast<ns>(diff).count()<<endl;
    }
    myfile.close();
}
