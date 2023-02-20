#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    string input;

        cout << "Enter a number BESIDES 0: ";

        //Reads entire line in case someone
        //dumb writes a whole sentence vs. a single
        //word or character
        getline(cin, input);

        //attempts function below
        try 
    {
        //stoi converts string to integer
        //entering an invalid number sends it to error
        // but is caught by "catch"
        num = stoi (input);
        if (num > 0) 
        {
            cout << "Looks like you're DUMB \n"; 
        }
        else if (num < 0) 
        {
            cout << "Looks like you're DUMB \n";
        }
        else if (num == 0)
        {
            cout << "Wow you're REALLY special!!!!\n";
        }
    }
        // if user enters an input that isn't a number
        // the error exception is the code below
        // const = cant change after being thrown
        // invalid_argument = exception type for errors
        // & = Reference to original object
        // e = exception, could be anything
        catch (const invalid_argument& e) 
    {
        cout << "Does " << input << " look like a number to you????????\n";
    
    }
    return 0;
}
    

