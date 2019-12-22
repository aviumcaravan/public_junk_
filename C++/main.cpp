#include "functions.hpp" //H_FUNCTIONS_

//lines initialised with "//" or "/*" are comment lines. the "/*" comment should also end with a "*/", is more handy for multi-line comments.

/*

primitive types:
{
integer value types (order sorted by allocation size and database size):
	::short - used to store small integer values;
	::int - used to store average/regular integer values;
	::long - high-range data storing integer values;
object types:
	::bool - true/false value;
	::char - stores ASCII characters;
	::float - decimal fraction values (up to 7 digits after a comma);
	::double - decimal fraction values (up to 15 digits after a comma);
}

*/

//example values:

/*

short a = 10;
int b = 500;
long c = 274592164303;
bool example = true;
char f = 'f';
float n = 5.3333333f;
double x = 6.666666666666666f;

*/

//you can also initialise lists/tables to create a database of various elements.
//first element is not a 1, but a 0, so you have to know the amount of list elements and substract one from it for the last element.
//list size has to be a constant value. (type modifier for a constant value is const, and it has to be added before the type. without "const" your value will be a variable.
//lists are quite similar to enumeration classes (enum), which will be mentioned later.

//example lists:

const long fibonacci[] =
{
	0,		//fibonacci[0]
	1,		//fibonacci[1]
	1,		//fibonacci[2]
	2,		//fibonacci[3]
	3,		//fibonacci[4]
	5,		//fibonacci[5]
	8,		//fibonacci[6]
	13,		//fibonacci[7]
	21,		//fibonacci[8]
	34,		//fibonacci[9]
	55,		//fibonacci[10]
	89,		//fibonacci[11]
	144,	//fibonacci[12]
	233,	//fibonacci[13]
	377,	//fibonacci[14]
	610		//fibonacci[15]
};

//there are two types of char lists, one of them is related to string tables.
//example 1:
const char sampleChar1[] =
{
	'h',	//sampleChar1[0]
	'e',	//sampleChar1[1]
	'l',	//sampleChar1[2]
	'l',	//sampleChar1[3]
	'o'		//sampleChar1[4]
};

//example 2 (string table alternative without "#include <string>"):
const char sampleChar2[] = "hello";

long a = -5; //@param a - integer value

int main()
{
	//root function body

	sampleChar[0]; //calling @param sampleChar[0]

	absolute(a); //calling function long absolute(long&) defined in functions.cpp:3

	return 0; //function returns a value of 0
}