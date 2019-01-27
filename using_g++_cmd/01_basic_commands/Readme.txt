# check location of the g++ compiler (GNU C++ compiler)
which g++

### C++ compilation consists of the following stages:

# 1. expansion of the #include preprocessor directives
# Use the command below to display the expanded source code:
g++ -Wall -std=c++11 -E code1.cpp

# 2. COMPILATION: translation of the expanded source-code into the machine-code (assembler file) <== this is done by compiler. The code produced in this step is in assembly language of the platform on which the compilation is performed.
# the command to stop the whole compilation process at this stage is the following:
g++ -Wall -std=c++11 -S code1.cpp

# -S flag: can be meorized by association with the .s extension of the assembler file


# 3. ASSEMBLY: this step takes the .s assembler files as the input and translates them into object code files with the .o extension. In order to stop the whole compilation process at this stage use the following flag: -c, so that the g++ command becomes:

g++ -Wall -std=c++11 -c code1.cpp

