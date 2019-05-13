CC=gcc
CFLAGS=-Wall -g -c
INCLUDE=-I.
LIBS=-L.

OBJS = phoneBookMain.o register.o print.o search.o delete.o
all: PhoneBook
%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
PhoneBook: $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)
clean:
	rm -f $(OBJS)
