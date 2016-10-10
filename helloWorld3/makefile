CC=g++
SDIR=src\\
ODIR=obj\\
RM=del

all: hello.exe

.PHONY: clean

clean:
	$(RM) $(ODIR)main.o hello.exe

hello.exe: $(ODIR)main.o
	$(CC) -g -o hello $(ODIR)main.o

$(ODIR)main.o:
	$(CC) -c -g -o $(ODIR)main.o $(SDIR)main.cpp