# Functions

- Functions are blocks of code you can reuse throughout your application
- Functions start with return type when being defined
  - `void` means no return type

## Parameters

- Variable you pass to the function when you call it
- Include the datatype and name of the parameter
  - `void function_name(datatype parameter_name)`
  - `void greeting(string user_name)`
- You can add multiple parameters
  - `void function_name(datatype parameter_name, dataype parameter_name)`
  - `void greeting(string user_name, int user_age)`

## Return statement

- Ends the execution of the function and returns control (and potentiall a value) back to the caller
- As soon as a return statement is hit, the function stops immediately, ignoring any code that follows it

## Variable Scope

- Depending on where a variable is created it may not be available throughout the program
- Local scope
  - Varibles defined in curly braces {} belong to the local scope
    - Includes functions, loops, conditional statements, etc
- Global scope
  - Also known as file scope
  - Variables declared outside of all functions is a global variable

## Comments

- Notes written in the source code to help humans understand the program or code
- Does not get executed
  - Comments start with `//....`
    - `// this is a comment`
- You can comment out lines of code as well

## namespace std

- std is the built-in namespace for the Standard Library. 
- It's a container that groups all standard types, functions, and objects (such as cout, cin, string, and vector) to separate them from your own custom code and prevent name collision
- Add `using namespace std;` to the top of your file to use the standard library in your file
