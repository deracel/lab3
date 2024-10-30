CC = gcc
CFALGS = -c -Wall

all: example

example: array_output.o delete.o dialogue.o greeting.o initialization.o input_int_for_ind_delete.o input_int_for_ind_insert.o input_int_for_task.o input_int.o insert.o main.o 
	$(CC) array_output.o delete.o dialogue.o greeting.o initialization.o input_int_for_ind_delete.o input_int_for_ind_insert.o input_int_for_task.o input_int.o insert.o main.o -o example

array_output.o: array_output.c
	$(CC) $(CFALGS) array_output.c

delete.o: delete.c
	$(CC) $(CFALGS) delete.c

dialogue.o: dialogue.c
	$(CC) $(CFALGS) dialogue.c

greeting.o: greeting.c
	$(CC) $(CFALGS) greeting.c

incert.o: incert.c
	$(CC) $(CFALGS) incert.c

initialization.o: initialization.c
	$(CC) $(CFALGS) initialization.c

input_int_for_ind_delete.o: input_int_for_ind_delete.c
	$(CC) $(CFALGS) input_int_for_ind_delete.c

input_int_for_ind_insert.o: input_int_for_ind_insert.c
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