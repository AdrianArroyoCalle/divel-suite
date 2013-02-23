#Monopoly UNIX Makefile
#Divel Suite is the collection of the oldest programs of Divel
#
#Project: Monopoly
#Version 1.8
#Compiler: GCC/MinGW
#License: Mozilla Public License

CC = g++
OBJ_AYUDA = AyudaApp.o AyudaFrm.o
OBJ_MONOPOLY = MonopolyApp.o MonopolyFrm.o
OBJ = $(OBJ_AYUDA) $(OBJ_MONOPOLY)
LIBS = `wx-config --libs`
INCLUDE = -c `wx-config --cppflags`



all: $(OBJ)
	$(CC) -o Ayuda $(OBJ_AYUDA) $(LIBS)
	$(CC) -o Monopoly $(OBJ_MONOPOLY) $(LIBS)
AyudaApp.o:
	$(CC) AyudaApp.cpp $(INCLUDE) -o AyudaApp.o
AyudaFrm.o:
	$(CC) AyudaFrm.cpp $(INCLUDE) -o AyudaFrm.o
MonopolyApp.o:
	$(CC) MonopolyApp.cpp $(INCLUDE) -o MonopolyApp.o
MonopolyFrm.o:
	$(CC) MonopolyFrm.cpp $(INCLUDE) -o MonopolyFrm.o
	
