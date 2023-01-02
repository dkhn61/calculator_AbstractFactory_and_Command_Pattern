//
// Created by Doha Ara on 02/11/22.
//
#include "Expr_Command.h"
class Invoker {
private:
    Expr_Command *cmd;
public:

    void setCmd(Expr_Command *command)
    {
        // "this" is the sender, every command will have the receiver, stack is the receiver in this program
        this->cmd = command;
    }

    void perform(){
       this->cmd->execute();
   }
};
