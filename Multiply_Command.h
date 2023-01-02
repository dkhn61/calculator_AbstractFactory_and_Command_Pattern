//
// Created by Doha Ara on 12/11/22.
//

#ifndef MULTIPLY_COMMAND_H
#define MULTIPLY_COMMAND_H
#include "Stack.h"
#include "Expr_Command.h"

class Multiply_Command : public Expr_Command {

public:
    Multiply_Command (Stack <int> & s);

    virtual void execute (void);
private:
    Stack <int> & s_;
};

#endif //MULTIPLY_COMMAND_H
