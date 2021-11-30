#include "leytevidal-cop3330-ch03-ex10.h"	
#include <iostream>

using namespace std;

int main()
{
    //initialize variables
    string op;
    double one = 0;
    double two = 0;
    double ansr = 0;

    //start+
    cout << "Please enter an operation along with two values:";
    cin >> op >> one >> two;

    //calculations using simple if/else
    if(op == "+")
    {
        ansr = one+two;
    }
    else if(op == "-")
    {
        ansr = one - two;
    }
    else if(op == "*")
    {
        ansr = one*two;
    }
    else if( op == "/")
    {
        if(two == 0)
        {
            cout << "Error";
        }
        else
        {
            ansr = one/two;
        }
    }

    //output with answer
    cout << one << " " << op << " " << two << " = " << ansr;
    return 0;
}