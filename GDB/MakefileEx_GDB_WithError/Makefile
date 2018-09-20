# Makefile to build monte_pi_sprng program
# --- macros
CC=gcc
CFLAGS= -g -Wall
OBJECTS= Hello.o value.o runtime.o


# --- targets
all:    Hello
Hello:   $(OBJECTS) 
	$(CC)  -o Hello  $(OBJECTS)
        
Hello.o: Hello.h Hello.c
	$(CC) $(CFLAGS) -c Hello.c
       
plot.o: value.h value.c
	$(CC) $(CFLAGS) -c value.c 
runtime.o: value.h runtime.c
	$(CC) $(CFLAGS) -c runtime.c

# --- remove binary and executable files
clean:
	rm -rf Hello $(OBJECTS)

