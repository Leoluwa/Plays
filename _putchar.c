/*
 * The _putchar function :)
 *
 */
#include "Leolu.h"

int _putchar(char p)
{
	//int Count;
	int Bytes = 1;
	int Fil_Descr = 1;

	/*
	 * To determine the number bytes to be passed to write():)
	 *
	 *
	while(Bytes < En_AlphBet)
	{
		Bytes++;
	} */

	/*
	 * Using the write() system call :)
	 *
	 * For the File Descriptor, 
	 * 0 means Standard input
	 * 1 means Standard output
	 * 2 means Standard error
	 *
	 */
	return (write(Fil_Descr, &p, Bytes));
}
