/*
 * Printing the English Alphabets
 * Using the _putcharn function :)
 *
 */

#include "Leolu.h"


int main(void)
{
	int Count, Value, Valu;
	char Upper_Case[En_AlphBet];
	char Lower_Case[En_AlphBet];

	/*
	 * Ascii Value :)
	 *
	 * A is 65
	 *
	 * a is 97
	 *
	 */
	Valu = 97;
	Value = 65;

	for(Count = 0; Count < 26; Count++, Value++, Valu++)
	{
		Lower_Case[Count] = Valu;
		Upper_Case[Count] = Value;
	}

	/*
	 * Printing the Alphabets  :)
	 *
	 */
	for(Count = 0; Count < En_AlphBet; Count++)
	{
		_putcharn(Lower_Case[Count]);
	}

	for(Count = 0; Count < En_AlphBet; Count++)
	{
		_putcharn(Upper_Case[Count]);
	}


	return (0);
}
