#include <stdio.h>
#include <string.h>
#define BUFFER 100
void input(char *command)
{
	printf("$");
	fgets(command,BUFFER,stdin);
	/* strcspn busca la primera aparicion de un caracter */
	command[strcspn(command ,"\n")] = '\0';
	
}
int main (void)
{
	/* setbuff nos permite decirle al programa que no espere para recojer el input que al momento de detectarlo lo escriba*/
	setbuf(stdout,NULL);
	short state = 1;
	char command[BUFFER];
	while(state){
		input(command);
		printf("%s:command not found\n",command);
		
	}


}

