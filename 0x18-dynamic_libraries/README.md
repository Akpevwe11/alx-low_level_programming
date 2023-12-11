## Dynamic libraries in c

STEP 1 - Create the header file - main.h 

STEP 2 - Create a C file(s) that contains functions in your library. 

STEP 3 - Create the main.c (_putchar.c) file where we should
call/run our function from and parse into some values. 

STEP 4: Create teh object files from the .c files 
gcc -fPIC -c *.c

STEP 5: Create a Dynamic library from this object code 
gcc -shared -o libdynamic.so *.o 

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH
