#include <iostream>
using namespace std;

int main()
{
    string text;

    cout << "enter some text!" << endl;
    cin >> text;

    cout << "Ok, you wrote... " << endl
         << text << endl
         << "right?";

    return 0;
}
