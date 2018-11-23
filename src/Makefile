main : main.c input.c
	gcc -I ../include -c input.c main.c
	mv *.o ../lib/
	gcc -o ../bin/main ../lib/input.o ../lib/main.o

run : main
	../bin/main

clean :
	rm ../lib/*
	rm ../bin/*
	rm ../lorenz.dat
