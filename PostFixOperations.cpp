//
// Created by Doha Ara on 13/11/22.
//
#ifndef POSTFIX_CPP
#define POSTFIX_CPP
#include "PostFixOperations.h"
#include "Invoker.cpp"

void PostFixOperations::evaluate_postFix(Base_Array<Expr_Command *> array, Stack_Expr_Command_Factory factory)
{
    Invoker *invoker = new Invoker;
    int size = this->getSize();
    for (int i=0; i<size; i++)
    {
        Expr_Command *command =  array[i];
        invoker->setCmd(command);
        invoker->perform();
    }
    Stack<int> stack= factory.getStack();
    std::cout << "Result after calculation:- " << stack.top() << std::endl;
    stack.clear();
    std::cout<< std::endl;

    delete invoker;

}

int PostFixOperations::precedence(char c)
{
    if (c == '/' || c == '*')
        return 2;
    else if (c == '%' || c == '+' || c == '-')
        return 1;
    else
        return -1;
}

Expr_Command * PostFixOperations::create_operator_postfix(Stack<int> st, Stack_Expr_Command_Factory factory)
{

    int op = st.top();
    char val = static_cast<char>(op);
    switch(val){
        case '+' : {
            return factory.create_add_command();
        }
        case '*' : {
            return factory.create_multiply_command();
        }
        case '/' : {
            return factory.create_divide_command();
        }
        case '%' : {
            return factory.create_modulo_command();
        }
        case '-' : {
            return factory.create_subtract_command();
        }

    }
    return 0;
}

int PostFixOperations::getSize(){
    return this->postfix_size;
}

void PostFixOperations::setSize(int size){
    this->postfix_size = size;
}

std::string PostFixOperations::validateInput(std::string str)
{

    int start = 0;
    std::string delimiter = " ";
    int end = str.find(delimiter);
    if(end == -1 ) return "INVALID";
    return str;
}

Base_Array<Expr_Command *>  PostFixOperations::infixToPostfix(std::string s, Base_Array<Expr_Command *> postfix,
                                           Stack_Expr_Command_Factory factory, int index )
{
    // Stack of int for stack operations
    std::istringstream input(s);
    std::string token;
    Stack<int> st = factory.getStack();
    std::string result;

    while (!input.eof ())
    {
        input >> token;
        // If an operator is scanned, then based on its precedence create postfixExpression
        if(token == "+" || token == "-" || token == "*" || token == "/" || token == "%")
        {
            char char_operator;
            std::string str_obj(token);
            char_operator = str_obj[0];
            while (!st.is_empty() && precedence(char_operator) <= precedence(st.top())) {
                postfix[index] = create_operator_postfix(st, factory);
                index++;
                result += st.top();
                st.pop();

            }
            //converting operator type from string to char to push to stack
            std::stringstream str_stream(token);
            char x;
            str_stream >> x;
            st.push(x);
        }
            // If the scanned character is an ‘(‘, pushing to the stack.
        else if (token == "(")
        {
            st.push('(');
        }
            // If the scanned character is an ‘)’ pop from the stack and create the command until an ‘(‘ is encountered.
        else if (token == ")")
        {
            while (st.top() != '(') {

                postfix[index] = create_operator_postfix(st, factory);
                index++;
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            //Operands are converted to Number commands
            std::stringstream str_stream_num(token);
            int num = 0;
            str_stream_num >> num;
            postfix[index]=factory.create_number_command(num);
            index++;
            result += token;
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.is_empty())
    {
        result += st.top();
        postfix[index] = create_operator_postfix(st, factory);
        index++;
        st.pop();
    }

    std::cout<< "Postfix expression:- " << result <<std::endl;
    this->setSize(index);
    return postfix;

}

#endif