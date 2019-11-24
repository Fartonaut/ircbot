ircbot: main.o
	gcc -o ircbot main.o

main.o:
	gcc -c main.c

clean:
	rm main.o
