#!/bin/sh
g++ plugin.cpp -o plugin.so --shared -fPIC
g++ base_plugin.cpp -c  -o base_plugin.o 
g++ basic.cpp -o basic -ldl base_plugin.o

