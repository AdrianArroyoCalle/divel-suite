#Divel Write UNIX Makefile
#Divel Suite is the collection of the oldest programs of Divel
#
#Project: Divel Write
#Version 1.2.2
#Compiler: GCC/MinGW
#License: Mozilla Public License

CC = g++
OBJ = DivelWriteApp.o DivelWriteFrm.o
LIBS = `wx-config --libs`
INCLUDE = -c `wx-config --cppflags`



all: $(OBJ)
	$(CC) -o DivelWrite $(OBJ) $(LIBS)
DivelWriteApp.o:
	$(CC) -o DivelWriteApp.o $(INCLUDE) DivelWriteApp.cpp
DivelWriteFrm.o:
	$(CC) -o DivelWriteFrm.o $(INCLUDE) DivelWriteFrm.cpp

