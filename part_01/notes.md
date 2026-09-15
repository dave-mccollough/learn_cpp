# Notes

## Variables

- Variables are containers for storing values to be reused later. 
- In C++, there are different types of variables
    - `bool`:  Stores values with two states: true or false
    - `char`:  Stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    - `double`:  Stores floating point numbers, with decimals, such as 19.99 or -19.99
    - `int`:  Stores integers (whole numbers), without decimals, such as 123 or -123
    - `string`:  Stores text, such as "Hello World". String values are surrounded by double quotes

### Declare a Variable

- Create a new variable
    - `type variable_name;`
    - `int user_count;`

### Initialize a variable

- Assign a value to a variable
    - `variable_name = value;`
    - `user_count = 3;`

### Declare and initialize a value

- Create and assign a value to a variable
    - `type variable_name = value;`
    - `int user_count = 3;`

### Adding variables together

- `int free_trial = 5;`
- `int subscription = 6;`
- `int total = free_trial + subscription;`

### Constants

- Use the `const` keyword when you don't want existing variable values to change

- `const int user_count = 12;`

### Arrays

- Collection of values that are related that share the same datatype
- Standard array sizes are not dynamic
- You need to define the number of items in the array
  - `datatype array_name[number of items in array] = {value 1, value 2...}`
    - `string user_names[2] = {"Sally", "Joe"};`
- You can modify the value of an item in array
  - `user_names[1] = "Bob";`

### Arrays with std::vector

- To append items to an array, you can use `std::vector`, which is the standard dynamic array container in C++.
- Include `#include <vector>` at the beginning of the file

### Get values from users

