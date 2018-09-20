# Makefile to build monte_pi_sprng program
# --- macros
CC=gcc
CFLAGS= -g -Wall
OBJECTS= Hello.o value.o


# --- targets
all:    Hello
Hello:   $(OBJECTS) 
	$(CC)  -o Hello  $(OBJECTS)
        
Hello.o: Hello.h Hello.c
	$(CC) $(CFLAGS) -c Hello.c
       
value.o: value.h value.c
	$(CC) $(CFLAGS) -c value.c 


# --- remove binary and executable files
clean:
	rm -rf Hello $(OBJECTS)

