//
// Created by Doha Ara on 03/11/22.
//
#include "Num_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Modulo_Command.h"
#include "AbstractCommandFactory.h"


class Stack_Expr_Command_Factory  : public AbstractCommandFactory{
public:
    Stack_Expr_Command_Factory (Stack <int> & s) : s_ (s) { }

    Expr_Command * create_number_command (int num) override{
        return new Num_Command(s_, num);
    }
    Expr_Command * create_add_command (void) override{
        return new Add_Command(s_);
    }
    Expr_Command * create_subtract_command (void) override{
        return new Subtract_Command(s_);
    }
    Expr_Command * create_multiply_command (void) override{
        return new Multiply_Command(s_);
    }
    Expr_Command * create_modulo_command (void) override{
        return new Modulo_Command(s_);
    }
    Expr_Command * create_divide_command (void) override{
        return new Divide_Command(s_);
    }
    Stack <int> getStack(){
        return s_;
    }

private:
   Stack <int> & s_;
};