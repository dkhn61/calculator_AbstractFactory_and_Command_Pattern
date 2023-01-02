//
// Created by Doha Ara on 12/11/22.
//

#ifndef SUBTRACT_COMMAND_H
#define SUBTRACT_COMMAND_H

#include "Stack.h"
#include "Expr_Command.h"

class Subtract_Command : public Expr_Command {

public:
    Subtract_Command (Stack <int> & s);

    virtual void execute (void);

private:
    Stack <int> & s_;
};

#endif //SUBTRACT_COMMAND_H
