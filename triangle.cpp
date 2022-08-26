#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Please enter sides of the triangle (a, b, c): ";
    float a,b,c;

    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "This is equal triangle" << endl;
    else 
        if (a != b && b != c && a != c)
            cout << "This is triangle with diff sizes" << endl;
        else 
            cout << "this is a triangle with two equal sides" <<endl;
    
    return 0;
}
