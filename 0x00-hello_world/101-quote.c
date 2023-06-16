#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * main - Entry point of the program
 *
 * Description: This function writes the message
 * "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * to the standard error using the write system call.
 *
 * Return: Always 1
 */
int main(void)
{
	int stderr_fd;
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t message_len = strlen(message);

	stderr_fd = open("/dev/stderr", O_WRONLY);
	if (stderr_fd == -1)
		return (1);

	if (write(stderr_fd, message, message_len) != (ssize_t)message_len)
	{
		close(stderr_fd);
		return (1);
	}

	close(stderr_fd);
	return (1);
}
