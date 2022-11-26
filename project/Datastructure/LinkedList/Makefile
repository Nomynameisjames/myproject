App: create.o display.o file.o insertafter.o deletehead.o inserthead.o
	gcc *.o -o App
create.o: create.c
	gcc -c create.c
display.o: display.c
	gcc -c display.c
insertafter.o: insertafter.c
	gcc -c insertafter.c
file.o: file.c
	gcc -c file.c
inserthead.o: inserthead.c
	gcc -c inserthead.c
deletehead.o: deletehead.c
	gcc -c deletehead.c

clean:
	rm -f *.o App
