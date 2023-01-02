
#include "PostFixOperations.cpp"


// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.
// Created a Wrapper Facade named PostFixOperations and have put all the important functions like infixtoPostfix conversion and evaluation in it

//
// Created by Doha Ara on 28/10/22.
//

// COMMENT: You should implement the precedence function on
// the command object since it is better placed there.
// Have put the precedence function in Wrapper Facade

int main() {
    PostFixOperations postFixOperations;
    bool input = true;
    std::cout << "Hello, Please enter expression to calculate !" << std::endl;

    while(input)
    {
        std::string exp;
        int index = 0;
        Stack<int> st;
        std::string result;
        Stack_Expr_Command_Factory factory(st);
        Base_Array<Expr_Command *> postfix;
        std::cout << "Enter expression:- " << std::endl;
        std::getline(std::cin, exp);
       if(exp == "QUIT")
       {
           break;
       }
       exp = postFixOperations.validateInput(exp);
       if(exp == "INVALID")
       {
           std::cout << "[INVALID Expression] Please enter valid expression !!" << std::endl;
           continue;
       }
       // infix to Postfix conversion returns the postfix sequence of commands to be executed
        Base_Array<Expr_Command *> postfix_res = postFixOperations.infixToPostfix(exp, postfix, factory, index);
       //using command pattern to evaluate the created Command Objects created by factory
        postFixOperations.evaluate_postFix(postfix_res, factory);

    }
    return 0;
}



