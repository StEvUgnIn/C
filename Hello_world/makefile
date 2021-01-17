CC=gcc
RM=del

all: hello.exe

hello.o:
	$(CC) -c -o hello.o hello.c

world.o:
	$(CC) -c -o world.o world.c

hello.exe: hello.o world.o 
	$(CC) hello.o world.o main.c -o hello.exe

clean:
	$(RM) *.o
	$(RM) *.exe