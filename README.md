The design of the expression evaluator is based on the Command Pattern to evaluate the Postfix expression, 
and the (Abstract) Factory to create the commands based on parsing the Infix expression to convert it to a Postfix expression.  
It works by using a custom Stack and an Infix to Postfix conversion algorithm.

The expression evaluator is able to handle the following operators/tokens: +, -, /, *, %, (, ), integers (positive 
and negative). All expression will have a space between each token to simplify parsing. 
All input comes from the STDIN. The program loops until the user types QUIT. All output goes to STDOUT.
