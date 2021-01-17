CC=gcc
RM=del
FILE=main.c

all: main.exe main.i main.s main.o

main.exe: main.c
	$(CC) $(FILE) -o main.exe

main.i: main.c
	$(CC) -E $(FILE)

main.s: main.c
	$(CC) -S $(FILE)

main.o: main.c
	$(CC) -c $(FILE)

clean:	
	$(RM) *.o
	$(RM) *.exe