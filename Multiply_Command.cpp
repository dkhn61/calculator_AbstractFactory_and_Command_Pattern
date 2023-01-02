//
// Created by Doha Ara on 02/11/22.
//
#include "Multiply_Command.h"

// COMMENT: Do not place implementation code in the header file. Instead,
// create a separate source file.

//Created a separate header file Multiply_Command.h and implementing in Multiply_Command.cpp file

Multiply_Command::Multiply_Command (Stack <int> & s)
                     : s_ (s) { }

void Multiply_Command::execute (void)
{
    int n2 = s_.top();
    s_.pop();
    int n1 = s_.top ();
    s_.pop();
    s_.push (n1 * n2);
}

