#!/bin/bash

printf "\n  **********Compiling**********\n\n" 
g++ *.cpp -std=c++11 -o a.exe
printf "\n  **********Compiled***********\n\n" 
printf "\n  **********Running************\n\n" 
./a.exe
