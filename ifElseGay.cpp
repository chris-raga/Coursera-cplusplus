#include <iostream>
using namespace std;

int main() 
{
    int gay;
    string phrase;

    cout << "If u are gay type 1, if u are not gay type 0:  ";

    cin >> gay;

    if (gay > 1) 
        phrase = "\t\t \nGAY\n";
    else 
        phrase = "\t\t \nGAY\n";
        
    cout << "I'm sorry, you're ..." << phrase;

    return 0;
}