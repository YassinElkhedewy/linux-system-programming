#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define COUNT 1000
int main(){
char buf[COUNT];

if(getcwd(buf,sizeof(buf)) == NULL){
	exit(-1);
}	
else{
printf("%s\n",buf);
}
return 0;
}
