#!/bin/bash

# Step 1: Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Step 2: Create the static library liball.a from the object files
ar -rc liball.a *.o

# Step 3: Index the library for faster access (optional)
ranlib liball.a

# Step 4: Clean up - remove the object files
rm *.o

