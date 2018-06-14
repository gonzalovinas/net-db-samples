#!/bin/sh
g++ base_plugin.cpp -c -static -ggdb -fpic 
g++ unplugin.cpp base_plugin.o -shared -ggdb -fpic -o un_plugin.so
g++ main.cpp -o main -ldl base_plugin.o -ggdb 

