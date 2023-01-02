//
// Created by Doha Ara on 03/11/22.
//
#ifndef ABSTRACT_FACTORY_CPP
#define ABSTRACT_FACTORY_CPP
#include "Expr_Command.h"
#include "AbstractCommandFactory.h"


Expr_Command * AbstractCommandFactory::create_number_command (int num){ return nullptr;}
Expr_Command * AbstractCommandFactory::create_add_command (void){return nullptr;}
Expr_Command * AbstractCommandFactory::create_subtract_command (void){return nullptr;}
Expr_Command * AbstractCommandFactory::create_multiply_command (void){return nullptr;}
Expr_Command * AbstractCommandFactory::create_modulo_command (void){return nullptr;}
Expr_Command * AbstractCommandFactory::create_divide_command (void){return nullptr;}

#endif