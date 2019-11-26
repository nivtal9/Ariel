CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB= myBank.o 
FLAGS= -Wall -g

all:  mybank mains 	


mybank: $(OBJECTS_LIB)
	$(AR) -rcs libMyBank.a $(OBJECTS_LIB)	

mains: $(OBJECTS_MAIN) libMyBank.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libMyBank.a


myBank.o: myBank.c myBank.h 
	$(CC) $(FLAGS) -c MyBank.c
main.o: main.c myBank.h   
	$(CC) $(FLAGS)  -c main.c 

.PHONY: clean all  mybank

clean:
	rm -f *.o *.a *.so mains 