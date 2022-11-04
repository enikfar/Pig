CFLAGS = -g -pedantic -std=c99 -Wall -Wextra
all: pig
pig: pig.c
	gcc $(CFLAGS) -o pig $^

clean: 
	rm -rf pig
