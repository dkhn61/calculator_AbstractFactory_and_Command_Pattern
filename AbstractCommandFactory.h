//
// Created by Doha Ara on 13/11/22.
//

#ifndef ABSTRACTCOMMANDFACTORY_H
#define ABSTRACTCOMMANDFACTORY_H

class AbstractCommandFactory {

public:
    virtual Expr_Command * create_number_command (int num) = 0;
    virtual Expr_Command * create_add_command (void) = 0;
    virtual Expr_Command * create_subtract_command (void) = 0;
    virtual Expr_Command * create_multiply_command (void) = 0;
    virtual Expr_Command * create_modulo_command (void) = 0;
    virtual Expr_Command * create_divide_command (void) = 0;

};

#endif //ABSTRACTCOMMANDFACTORY_H
