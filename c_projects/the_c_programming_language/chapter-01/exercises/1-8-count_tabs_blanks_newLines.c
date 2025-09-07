#include <stdio.h>
int main()
{
	int blanks=0, tabs = 0, newLines = 1;
	char c;
	for (int i  = 0; (c=getchar()) != EOF; ++i) {
		if (c == ' ') {
			++blanks;
		}
		else if (c == '\t')
		{
			++tabs;
		}
		else if (c == '\n') {
			++newLines;
		}
		else {
			continue;
		}
	}
	printf("\nnumber of blanks are : %d\n ", blanks);
	printf("number of tabs are : %d\n ", tabs);
	printf("number of new lines are : %d\n ", newLines);
	return 0;
}
