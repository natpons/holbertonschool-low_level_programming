/* EX fork + wait + execve*/

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
	pid_t my_pid;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int i;

	/*exe the com in 5 dif child processes*/
	for(i = 0; i < 5; i++)
	{
		/*ID of the parent*/
		my_pid = getpid();
		printf("I am a parent. My pid is %u\n", my_pid);
				
		/*creation of the first child process*/
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}

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
			sleep(2);
			wait(NULL);
			printf("Good job, child number: %d\n", child_pid);
		}
	}
	return (0);
}
