//
// Created by Doha Ara on 12/11/22.
//

#ifndef MODULO_COMMAND_H
#define MODULO_COMMAND_H
#include "Stack.h"
#include "Expr_Command.h"

class Modulo_Command : public Expr_Command {

public:
    Modulo_Command (Stack <int> & s);

    virtual void execute (void);

private:
    Stack <int> & s_;
};

#endif //MODULO_COMMAND_H
