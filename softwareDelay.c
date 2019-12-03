#include "softwareDelay.h"

/**
 * Description: this delay function operate in a polling manner
 * 				don't use it with RTOSs
 * @param n: the milli-seconds
 */
void SwDelay_ms(uint32 n)
{
	while (n--)
	{
		for (uint32 i =0; i<1000; i++);
	}
}
