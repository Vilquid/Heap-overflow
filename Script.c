#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE fd*;

	char *between_user = malloc(20);
	char *exit_file = malloc(20);

	if (argc < 2)
	{
		printf("Usage : %s <the string gonna bewritten in /tmp/eni>\n", argv[0]);
		exit(0);
	}

	strcpy(exit_file, "/tmp/eni");
	strcpy(between_user, argv[1]);

	printf("Writte of \"%s\" at the end of %s...\n", between_user, exit_file);

	fd = fopen(exit_file, "a");

	if (fd == NULL)
	{
		fprintf(stderr, "Impossible d'ouvrir %s\n", exit_file);
		exit(1);
	}

	fprintf(fd, "%s\n", between_usern);
	fclose(fd);

	return 0;
}