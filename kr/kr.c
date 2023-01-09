// This is a single line comment

/*	Comments are ignored by compiler and they make program easier to 
	understand. 
	This is a multi - line comment.
	Expanding over 3 lines.
*/





/**
*	INTERODUCTION

*	C is a general purpose programming language.
*	C was used to develope UNIX OS.
*	C is closely associated with UNIX OS.
*	C is called system programming languagen because it is useful for writing compilerws & OS.
*	C is typed programming language.
*	C has following data types: Character, integer, floating point number.
*	C has following derived data types: pointers, arrays, structures and unions.
*	C expression is operator, operand and functions calls.
*	C pointers are memory addresses.

*	C well structured program consist of following control flow statements: if-else, switch,
*	while, do-while & for loops, break to exit loop

*	C functions may return any type of value and can be called recursively.
*	C functions may exist in separate source files that are compiles seprately.
*	C variables may be Global, Local, internal to a function, external to a function.
*	C variables only work within a single source file. 
*	C preprocessing is macro substitution on program text.
*	C preprocessing can include other source files.
*	C preprocessing can conditionally compile source code.
*	C is low-level programming language.
*	C do not operate directly on strings, sets, lists, arrays.
*	C has static, stacked storage allocation facility. There is no heap or garbage collection.
*	C does not have built in file access method for input/output facilites.
*	C offers only single-thread control flow.
*	C does not offer multi-programming, parallel operation, sychronization, or coroutines.
*	C is not a strongly-typed language.
*/

/**
*	Chapter 1
*	C program is functions + variables.
*	C funcitons are operations to be done.
*	C variables store values.
*	C funcitons can be named whatever you like except main function.
*	C program execution starts at main function. Hence every program must have main somewhere.
*	C program calls main function which calls ohter function written by you and from library.

*	#include<stdio.h> load input output library.
*	function arguments communicate data between calling function to function it calls. 
*	arguments are surrounded by parenthesis after function name.
*	empty parenthesis() means function expect no argument.
*	function body which contains statements are enclosed in curly braces{}.
*	function is called by naming it, followed by parenthesized list of arguments.

*	A sequence of characters in double quotes, like "Hello, World!\n" 
*	is called character string or string constant.
*	Escape sequences
*	\n is new line character
*	\t is for tab spaces
*	\b is for backspace
*	\" is for double quotes inside double quotes.
*	\\ is for backspace itself.
*	int - integer, short and long integers
*	float - floating point number with fractional part. double - double precision floating point
*	char - A single character
*	Other data types - arrays, structres, unions and pointers to them, and functions
*	Every statement is terminated by a semicolon at the end;
*	printf is not part of C language. It is a function from standard library.
*	scanf is like printf, but it reads input instead of writing output.	
*	5.0/9.0 would not truncate to zero as both are floating point numbers.	
*	%3.0f is a three character wide floating point number with no decimal point and no fraction digits.
*	%6.1f is a six character wide floating point number with 1 digit after decimal point.
*	%o for octal, %x for hexdecimal, %c for character, %s for character string, %% for % itself.
*	A text stream is a sequence of characters divided into lines; each line consist of zero or more characters followed by a newline character. 
*	getchar() read the input characters from a text stream and returns that as its value.
*	putchar() prints a character. 
*	!= have higher precedence than =
*/





#include<stdio.h>
#define LOWER 0		// symbolic name/constant. These are not variables
#define UPPER 300	// written is upper case to distinguise/identify from variable names
#define STEP  20	// No semi-colon at end of #define




int main(/*function arguments*/){
	//function body
	printf("Hello, World!\n");		//call to printf function
	// Fahrenheit-Celsius table
	float fahr, celsius;	// Declaration
	fahr = LOWER;
	while(fahr<=UPPER){	// This is while loop body which is excuted when condition is True.
		celsius = 5*(fahr-32)/9;	// Integer division truncates and fractional part is discarded. and 5/9 would become zero.
		printf("%3.0f\t%6.1f\n", fahr, celsius);	// printf is general purpose output formatting function.
		// Each %  is location for arguments to be substituted. %d for integer arguments.
		fahr = fahr + STEP;	// after this condition is re-tested 
		//	and continued untill it becomes false.
		//	When test become false the loop ends.
		//	Execution continue after loop body.
	}		
	// Indentation help to know which statements are inside the loop.
	int far;
	for(far = 300;far >=0; far = far - 20){
	//	Initialization Test		Increment
		printf("%3.0d\t%6.1f\n", far, (5.0/9.0)*(far-32));
	// for loop is preferred as it is more concise and compact.
	}	
	// Input/Output as stream of characters

/*
	int c = getchar();
	while(c != EOF){	// != means not equal to, EOF means End Of File == end of valid input data
		putchar(c);
		c = getchar();
	}		
*/

	printf("termux is my only hope.\n");
	printf("Learning clang and UNiX to build my simple OS\n");
	
	//Ex-1.7 print value of EOF
	printf("The value of EOF is: %d\n",EOF);
	// 1.5.2 Character counting program
	
	int cc = 0;
	while (getchar() != '\n'){
		++cc;
/*
		++cc means increment by one. is like cc = cc+1 
		but ++cc is more concise and often more efficient.
		--cc decrement by 1.
		The operators ++ and -- can be either prefix operators (++cc)
		or postfix (cc++);
		




*/
	}
	printf("You just typed %d characters including space!\n",cc);	
/*	%ld for long integer
	%f for both float and double
	%.0f suppresses printing of the decimal point and the fraction part
	which is zero.


	// 1.5.3 Line Counting


	int c;
	int lc = 0;
	while ((c=getchar()) != EOF){
		if  (c == ' '){
			++lc;
			printf("Number of blanks = %d\n", lc);
		}
	}
*/

	printf("%d\n",'\n');
	printf("\n");
	// Ex 1.9	
	// replace many blank space by one space
	int bc, lc = 0;
	while((bc = getchar()) != '\n'){
		if (bc == ' '){
			if (lc != ' '){
				putchar(bc);
			}
		}
		else{
			putchar(bc);
		}
		lc = bc;
	}
	printf("\n");
	printf("This is change from my kukui server");

}



