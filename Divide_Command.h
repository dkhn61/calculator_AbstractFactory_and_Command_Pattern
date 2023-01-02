//
// Created by Doha Ara on 12/11/22.
//

#ifndef DIVIDE_COMMAND_H
#define DIVIDE_COMMAND_H
#include "Stack.h"
#include "Expr_Command.h"

class Divide_Command : public Expr_Command {

public:
    Divide_Command (Stack <int> & s);

    virtual void execute (void);
private:
    Stack <int> & s_;
};

#endif //DIVIDE_COMMAND_H
