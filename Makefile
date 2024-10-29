CC = gcc
CFALGS = -c -Wall

all: example

example: array_output.o dialogue.o initialization.o input_int_for_ind_insert.o input_int_for_task.o input_int.o insert.o main.o 
	$(CC) array_output.o dialogue.o initialization.o input_int_for_ind_insert.o input_int_for_task.o input_int.o insert.o main.o -o example

array_output.o: array_output.c
	$(CC) $(CFALGS) array_output.c

dialogue.o: dialogue.c
	$(CC) $(CFALGS) dialogue.c

incert.o: incert.c
	$(CC) $(CFALGS) incert.c

initialization.o: initialization.c
	$(CC) $(CFALGS) initialization.c

input_int_for_ind_incert.o: input_int_for_ind_insert.c
	$(CC) $(CFALGS) input_int_for_ind_insert.c

input_int_for_task.o: input_int_for_task.c
	$(CC) $(CFALGS) input_int_for_task.c

input_int.o: input_int.c
	$(CC) $(CFALGS) input_int.c

insert.o: insert.c
	$(CC) $(CFALGS) insert.c

main.o: main.c
	$(CC) $(CFALGS) main.c

clean:
	rm -rf *.o example

.PHONY: all clean