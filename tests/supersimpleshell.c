#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**                                         
 * main - execve example                               
 *                                          
 * Return: Always 0.                                 
 */
int main(void)
{
	char *buffer;
	size_t bufsize = 1024;
	size_t command;
	pid_t my_pid;
	pid_t child_pid;
	char *argv[] = {"", NULL};
	int i;

	while (1)
	{
		printf("cisfun$\n");

		/*buffer for a command of a user*/
		buffer = (char *)malloc(bufsize * sizeof(char));

		printf("Enter the command: ");
		/*why it works like this ?*/
		command = getline(&buffer,&bufsize,stdin);
		/*argv[0] = buffer;*/
		printf("%s", argv[0]);
		printf("You typed: %s\n",buffer);
		
		child_pid = fork();
		argv[0] = buffer;

		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}

		/*ID of the parent*/
		my_pid = getpid();

		if (child_pid == 0) /*fork will return 0 to the child*/
		{
			/*will execute FOR THE CHILD*/
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		}
		else
		{
			/*will execute FOR THE PARENT*/
			/*wait for a child to exit before creating a new child*/
			wait(NULL);
			printf("Good job, child number: %d\n", child_pid);
		}  
	}

	return (0);
}
