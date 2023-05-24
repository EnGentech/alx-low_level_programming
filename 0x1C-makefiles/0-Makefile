all: school.o main.o
	gcc school.o main.o -o school
school.o: school.c m.h
	gcc -c school.c
main.o: main.c m.h
	gcc -c main.c
