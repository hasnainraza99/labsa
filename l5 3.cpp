#include<stdio.h>
int main(){
	printf("i have lraen following escape sequences in PF class\n");
	    printf("sequence       Name         Description \n");
		printf("-----------------------------------------------------------------------------\n");
		printf("\\n           newline       causes the cursor to go to the next line for subsequent printing\n");
	    printf("\\t           tab           causes the cursor to skip over to the next tab\n" );
	    printf("\\a           alarm         causes the cursor to beep once\n" );
	    printf("\\b           backspace     causes the cursor to backup or move left one position\n" );
        printf("\\r           return        causes the cursor to go to the beginning of the current line\n" );
        printf("\\\           backslash     causes a backslash to be printed\n" );
        printf("\\'           single quote  causes a single quotation mark to be printed\n" );
	    printf("\\""          double quote  causes a double quotation mark to b printed\n");
	return 0;
}
