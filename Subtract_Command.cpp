
//
// Created by Doha Ara on 29/10/22.
//
#include "Subtract_Command.h"

// COMMENT: Do not place implementation code in the header file. Instead,
// create a separate source file.

//Created a separate header file Subtract_Command.h and implementing in Subtract_Command.cpp file


Subtract_Command::Subtract_Command (Stack <int> & s)
        : s_ (s) { }

void Subtract_Command::execute (void)
{
    int n2 = s_.top();
    s_.pop();
    int n1 = s_.top ();
    s_.pop();
    s_.push (n1 - n2);
}
