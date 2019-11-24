ircbot: main.o
	gcc -o ircbot main.o

main.o: main.c
	gcc -c main.c

clean:
	rm main.o
