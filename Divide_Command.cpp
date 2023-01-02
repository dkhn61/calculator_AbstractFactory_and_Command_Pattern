//
// Created by Doha Ara on 02/11/22.
//

#include "Divide_Command.h"
// COMMENT: Do not place implementation code in the header file. Instead,
// create a separate source file.

//Created a separate header file Divide_Command.h and implementing in Divide_Command.cpp file

Divide_Command::Divide_Command (Stack <int> & s)
               : s_ (s) { }

void Divide_Command::execute (void)
{
    int n2 = s_.top();
    s_.pop();
    int n1 = s_.top ();
    s_.pop();
    s_.push (n1 / n2);
}
