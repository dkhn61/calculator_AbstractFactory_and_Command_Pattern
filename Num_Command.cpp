//
// Created by Doha Ara on 29/10/22.
//
#include "Num_Command.h"

// COMMENT: Do not place implementation code in the header file. Instead,
// create a separate source file.

//Created a separate header file Num_Command.h and implementing in Num_Command.cpp file


Num_Command::Num_Command (Stack <int> & s, int n)
            : s_ (s), n_ (n) { }

void Num_Command::execute (void)
{
        s_.push (this->n_);
}


