#include <stdio.h>
#include <string.h>
#define SIZE 20000

int main()
{
    char in[SIZE];
    int n, x,status;
    status = 0;
    while (1) {
	printf("FEMTO STARTED >> ");
	char *p = fgets(in, SIZE, stdin);
	if (p == NULL) {
	    break;

	}
	if (in[0] == '\n') {
	    continue;
	}
	n = strncmp(in, "echo", 4);
	x = strncmp(in, "exit", 4);
	if (n == 0 && (in[4] == '\n' || in[4] == ' ')) {
	    printf("%s", (in + 5));
	    status = 0;

	} else if (x == 0 && in[4] == '\n') {
	    printf("Good Bye\n");
	    status = 0;
	    break;
	} else {
	    printf("Invalid command\n");
	    status = 1;
	}
    }
    return status;


}
