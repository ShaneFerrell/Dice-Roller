// Shane Ferrell

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

uint32_t roll_dice(uint32_t sides)
{
	uint32_t roll = 0, sum = 0;

	do
	{
	    roll = ((rand() % sides) + 1);
	    sum += roll;
	} while(roll == sides);

    return sum;
}

uint32_t step(uint32_t step)
{
	switch(step)
	{
		case 1:
		{
			return roll_dice(4) - 2;
		}
		case 2:
		{
			return roll_dice(4) - 1;
		}
		case 3:
		{
			return roll_dice(4);
		}
		case 4:
		{
			return roll_dice(6);
		}
		default:
		{
			return 0;
		}
	}
}

int main()
{
	srand(time(0));

	return 1;
}