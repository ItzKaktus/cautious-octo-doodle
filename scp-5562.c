#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define IGNORE_VAL 256

int main()
{
	static char ignore[IGNORE_VAL+1];

	printf("SCP: 5562\n");
	printf("Description: SCP-5562 is contained in SITE-[REDACTED]. His containment chamber is mostly a lab. He does experiments on SCP-5562-1. SCP-5562-1 is a goo that can be different colors, its is unknown what it can do or where it came from.\n");
	printf("Special containment info: None logged\n");
	printf("A Person named: Dr. [REDACTED] asked some things to SCP-5562, Here is the audio log from the testing.\"\n\n");
	printf("Press Enter to continue");
	fgets (ignore, IGNORE_VAL, stdin);
	printf("\n-{START OF LOG}-\n");
	printf("[Dr. [REDACTED] sits down facing SCP-5562]\n");
	printf("SCP-5562: \"How long is this going to take?\"\n");
	printf("Dr. [REDACTED]: \"Not long, Just asking some things that you should know.\"\n");
	printf("SCP-5562: \"Ok...\"\n");
	printf("Dr. [REDACTED]: \"OK! Number one: What is your name?\"\n");
	printf("SCP-5562: \"Dr. Light...\"\n");
	printf("[Dr. [REDACTED] takes notes on a clipboard]\n");
	printf("Dr. [REDACTED]: \"Number two: What was the facility that you worked at?\"\n");
	printf("SCP-5562: \"Furracon labs.\"\n");
	printf("Dr. [REDACTED]: \"Odd name...\" [Takes more notes on the clipboard]\n");
	printf("Dr. [REDACTED]: \"Number three: Who is Dr. Conner?\"\n");
	printf("[SCP-5562 seems to blush a little]\n");
	printf("SCP-5562: \"Uhhh... No one?\"\n");
	printf("[Dr. [REDACTED] looks at him]\n");
	printf("Dr. [REDACTED]: \"Are you sure?\"\n");
	printf("SCP-5562: \"Yeah...\"\n");
	printf("Dr. [REDACTED]: \"Ok...\"\n");
	printf("[Dr. [REDACTED] Takes notes on the clipboard]\n");
	printf("Dr. [REDACTED]: \"That\'s all we have for today.\"\n");
	printf("SCP-5562: \"OK, See ya.\"\n");
	printf("-{END OF LOG}- \n");
	return 0;
}
