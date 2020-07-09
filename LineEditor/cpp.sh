#!/bin/bash
clear
printf "\n  ********** (( Compiling Errors )) **********\n\n" 
g++ *.cpp -std=c++11 -o a.exe
printf "\n  ********** (( Done )) ***********\n\n" 
printf "\n  ********** (( Running )) ************\n\n" 
./a.exe
