CC = gcc
SRC = create.c display.c insertafter.c inserthead.c deletehead.c file.c
OBJ = $(SRC:.c=.o)
NAME = App
all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f *.o App
