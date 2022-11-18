/*
 * The _putstr function
 *
 * This function prints a string to Standard Output :)
 *
 */

#include "Leolu.h"


int _putstr(char *Str)
{
	char *Ptr;
	char *P_tr;
	char *S_tr;
	int Bytes = 1;
	/*
	 * For the File Descriptor,
	 *
	 * 0 means Standard Input
	 * 1 means Standard Output
	 * 2 means Standard error  :)
	 *
	 */
	int Fil_Descr = 1;
	int Char_Count = 0;

//	puts("\n  After declarations");


	/*
	 * Retain the Beginning Address of Str.
	 *
	 */
	S_tr = Str;
//	puts("\n  Retaining beginning address of Str");
	/*
	 * To determine the number of bytes to allocate  :)
	 *
	 */
	while(*Str)
	{
		Char_Count++;

		Str++;
	}
//	puts("\n  After the char_count loop");
	
	Ptr = (char*)malloc(Char_Count * sizeof(char));
//	puts("\n  After malloc");
	if(*Ptr)
	{
		_putcharn('F');
		_putcharn(NULL);
		_putcharn(NULL);

		return (0);
	}
//	puts("\n  After malloc test");

	/*
	 * Retain the Beginning Address of Ptr.
	 *
	 */
	P_tr = Ptr;
//	puts("\n  Retaining beginning address of Ptr");


	Str = S_tr;
	
	while(*Str)
	{
		*Ptr = *Str;

		Ptr++;
		Str++;
	}
//	puts("\n  After  *Ptr = *Str;");


	Str = S_tr;

	Ptr = P_tr;
	while(*Ptr)
	{
		write(Fil_Descr, Ptr, Bytes);

		Ptr++;
	}


	_putcharn(NULL);
	_putcharn(NULL);

/*	free(Ptr);*/
	free(P_tr);
/*	free(S_tr);*/


	return (Bytes);
}
