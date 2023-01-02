//
// Created by Doha Ara on 12/11/22.
//

#ifndef ADD_COMMAND_H
#define ADD_COMMAND_H
#include "Stack.h"
#include "Expr_Command.h"

class Add_Command : public Expr_Command {

public:
    Add_Command (Stack <int> & s);

    virtual void execute (void);
private:
    Stack <int> & s_;
};

#endif //ADD_COMMAND_H
