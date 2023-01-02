//
// Created by Doha Ara on 29/10/22.
//

#include "Add_Command.h"

// COMMENT: Do not place implementation code in the header file. Instead,
// create a separate source file.

//Created a separate header file Add_Command.h and implementing in Add_Command.cpp file


Add_Command::Add_Command (Stack <int> & s)
            : s_ (s) { }

void Add_Command::execute (void)
{
        int n2 = s_.top();
        s_.pop();
        int n1 = s_.top ();
        s_.pop();
        s_.push (n1 + n2);
}

