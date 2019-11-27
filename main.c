#include <stdio.h>	//to print status stuff
#include <stdint.h>	//don't be silly, wrap your willy
#include <string.h>	//for string stuff
#include <sys/types.h>	//needed on some legacy systems
#include <sys/socket.h>	//needs above on legacy sytems
#include <netinet/in.h>	//
#include <netinet/ip.h> //soup set of ^
#include <errno.h>	//no error

//define things
#define handleError(msg) \
	do {perror(msg); exit(EXIT_FAILURE);} while(0)

//super secret stuffz
const char *username = "FartoBot";

//consts
const uint16_t port = 6667;
const char *server = "irc.esper.net";

//not consts
bool connected = false;
char password[16];

//establish connection to interwebz
int soccSucc = socket(AF_INET, SOCK_STREAM, 0);

int main() {
	int soccSucc;
	printf("Enter irc password: ");
	scanf("%16s", &password);
	
	soccSucc = socket(AF_INET, SOCK_STREAM, 0);
	if (soccSucc == -1) handleError("socket");

	return 0;
}
