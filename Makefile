CC=gcc
CFLAGS=-Wall
OBJECTS= basicMath.o power.o
DEPS=myMath.h

all: mains maind $(OBJECTS) mymaths
		$(CC) $(CFLAGS) *.o -L. -lmyMath -o Ex1	
		

mymaths: $(OBJECTS)
		ar -rcs $@ $(OBJECTS) 


mains: main.c mymaths
		$(CC) $(CFLAGS) -c -o main.o main.c    

mymathd: $(OBJECTS)
		$(CC) $(CFLAGS) -shared  $(OBJECTS) -o libmyMath.so

maind: main.c mymathd
		$(CC) $(CFLAGS) -c -o  main.o main.c 


basicMath.o: basicMath.c $(DEPS)
		$(CC) $(CFLAGS) -c basicMath.c

power.o: power.c $(DEPS)
		$(CC) $(CFLAGS) -c power.c


	


.PHONY: clean all


clean:
		rm -f mains maind *.o *.so *.a mymaths Ex1  



