CC = gcc
CFALGS = -c -Wall

all: example

example: arrops.o change.o dialogue.o greeting.o input.o main.o output.o
	$(CC) arrops.o change.o dialogue.o greeting.o input.o main.o output.o -o example

arrops.o: arrops.c
	$(CC) $(CFALGS) arrops.c

change.o: change.c
	$(CC) $(CFALGS) change.c

dialogue.o: dialogue.c
	$(CC) $(CFALGS) dialogue.c

greeting.o: greeting.c
	$(CC) $(CFALGS) greeting.c

input.o: input.c
	$(CC) $(CFALGS) input.c

main.o: main.c
	$(CC) $(CFALGS) main.c

output.o: output.c
	$(CC) $(CFALGS) output.c

clean:
	rm -rf *.o example

.PHONY: all clean