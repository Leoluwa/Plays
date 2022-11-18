/*
 * The _putcharn function :)
 *
 */
#include "Leolu.h"

int _putcharn(char p)
{
	int Status;
	int Bytes = 1;
	int Fil_Descr = 1;
	char NewLine = '\n';

	/*
	 * Print the first newline  :)
	 *
	 */
	write(Fil_Descr, &NewLine, Bytes);


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
	Status = (write(Fil_Descr, &p, Bytes));


	/*
	 * Print the second newline  :)
	 *
	 */
	write(Fil_Descr, &NewLine, Bytes);


	return (Status);
}
