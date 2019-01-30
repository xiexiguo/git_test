test: a.o b.o
	gcc -o $@ $^
.c.o:
	gcc -c -o $@ $^
clean:
	rm *.o test
