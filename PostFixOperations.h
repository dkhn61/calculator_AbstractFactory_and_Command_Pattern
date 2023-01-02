//
// Created by Doha Ara on 13/11/22.
//

#ifndef POSTFIXOPERATIONS_H
#define POSTFIXOPERATIONS_H
#include "Expr_Command.h"
#include "Stack.h"
#include "Stack_Expr_Command_Factory.cpp"
#include <sstream>
#include <iostream>
#include <string>

class PostFixOperations {

public:
    int precedence(char i);

    //int postfix_size = 0;
    int getSize();

    void setSize(int size);

    Base_Array<Expr_Command *> infixToPostfix(std::string s, Base_Array<Expr_Command *> postfix, Stack_Expr_Command_Factory factory, int index);

    std::string validateInput(std::string basicString);

    Expr_Command * create_operator_postfix(Stack<int> st, Stack_Expr_Command_Factory factory);

    void evaluate_postFix(Base_Array<Expr_Command *> array, Stack_Expr_Command_Factory factory);

private:
    int postfix_size;
};


#endif //POSTFIXOPERATIONS_H
