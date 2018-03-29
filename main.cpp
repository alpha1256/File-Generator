#include <iostream>
#include <string>
#include "HTGEN.h"
using namespace std;

int main()
{
    back1:
    int a;
    cout <<"C++ Header and HTML File Generator \n1 for HTML file gen \n2 for header files " <<endl;
    cin >> a;
    if (a==1)
        HTMLGen();
    else if (a==2)
        cheaders();
    a=0;
    cout << "\n1 to create another file\n2 To exit";
    cin >> a;
    if (a==1)
        goto back1;
    else if (a !=1)
        return 0;
}
