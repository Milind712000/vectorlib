CC = gcc
CFLAGS = -Wall
DEPS = veclib.h
OBJ = vecmain.o vecadd.o vecprod.o vecangle.o vecdot.o vecnorm.o

%.o: %.c $(DEPS)
		$(CC) $(CFLAGS) -c -o $@ $<

final.o: $(OBJ)
		gcc $(CFLAGS) -o $@ $^

clean:
	rm *.o