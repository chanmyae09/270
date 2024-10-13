#include <iostream> 
#include<string>
using namespace std;

int main( ) {
//    string a ="Testing";
//    string &b =a;
//    b[0]='R';
//    cout<<a;
//    cout<<b;
    int x = 100;
    int *p = &x;
    int &ref1 = *p;
    int **pp = &p;
    *pp = &ref1;
    *pp = new int(200);
    ref1 = 300;
    cout<<x <<endl;
    cout<< &x<<endl;
    cout<< p<<endl;
    cout<< ref1<<endl;
    cout<< pp<<endl;
    cout<< *pp<< endl;


    return 0;
}
