#include <stdio.h>	

#include <sys/types.h>	//needed on some legacy systems
#include <sys/socket.h>	//needs above on legacy sytems

//super secret stuffz
const char *username = "Fartonaut";
const char *password = "hunter2";
char realname[11];
//establish connection to interwebz
//socket(AF_INET, 

int main() {
	printf("username: %s\npassword: %s\n", username, password);
	scanf("%11s", &realname);
	printf("%s\n", realname == "ok" "boomer" : realname);
	return 0;
}
