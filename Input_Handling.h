#ifndef INPUT_HANDLING
#define INPUT_HANDLING
#include <iostream>
#include <string>

using namespace std;

class Invalid_Input {

public:
    Invalid_Input(string in_ptr) : msg_ptr (in_ptr) { }
    const string msg_ptr;
private:

    Invalid_Input ();

};

#endif
