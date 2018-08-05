// Shane Ferrell

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

uint32_t roll_dice( uint32_t number_of_dice, uint32_t sides)
{
	uint32_t roll = 0, sum = 0;
	for (uint32_t i = 0; i < number_of_dice; i++)
	{
		do
		{
			roll =  ((rand() % sides) + 1);
			sum += roll;
		} while(roll == sides);
	}

	return sum;
}

uint32_t step(uint32_t step)
{
	switch(step)
	{
		case 1:
		{
			return (roll_dice(1, 4) - 2);
		}
		case 2:
		{
			return (roll_dice(1, 4) - 1);
		}
		case 3:
		{
			return roll_dice(1, 4);
		}
		case 4:
		{
			return roll_dice(1, 6);
		}
		case 5:
		{
			return roll_dice(1, 8);
		}
		case 6:
		{
			return roll_dice(1, 10);
		}
		case 7:
		{
			return roll_dice(1, 12);
		}
		case 8:
		{
			return roll_dice(2, 6);
		}
		case 9:
		{
			return (roll_dice(1, 8) + roll_dice(1, 6));
		}
		case 10:
		{
			return roll_dice(2, 8);
		}
		case 11:
		{
			return (roll_dice(1, 10) + roll_dice(1, 6));
		}
		case 12:
		{
			return roll_dice(2, 10);
		}
		case 13:
		{
			return (roll_dice(1, 12) + roll_dice(1, 10));
		}
		case 14:
		{
			return roll_dice(1, 12);
		}
		case 15:
		{
			return (roll_dice(1, 12) + roll_dice(2, 6));
		}
		case 16:
		{
			return (roll_dice(1, 12) + roll_dice(1, 8) + roll_dice(1, 6));
		}
		case 17:
		{
			return (roll_dice(1, 12) + roll_dice(2, 8));
		}
		case 18:
		{
			return (roll_dice(1, 12) + roll_dice(1, 10) + roll_dice(1, 8));
		}
		case 19:
		{
			return (roll_dice(1, 20) + roll_dice(2, 6));
		}
		case 20:
		{
			return (roll_dice(1, 20) + roll_dice(1, 8) + roll_dice(1, 6));
		}
		case 21:
		{
			return (roll_dice(1, 20) + roll_dice(2, 8));
		}
		case 22:
		{
			return (roll_dice(1, 20) + roll_dice(1, 10) + roll_dice(1, 8));
		}
		case 23:
		{
			return (roll_dice(1, 20) + roll_dice(2, 10));
		}
		case 24:
		{
			return (roll_dice(1, 20) + roll_dice(1, 12) + roll_dice(1, 10));
		}
		case 25:
		{
			return (roll_dice(1, 20) + roll_dice(2, 12));
		}
		case 26:
		{
			return (roll_dice(1, 20) + roll_dice(1, 12) + roll_dice(2, 6));
		}
		case 27:
		{
			return (roll_dice(1, 20) + roll_dice(1, 12) + roll_dice(1, 8) + roll_dice(1, 6));
		}
		case 28:
		{
			return (roll_dice(1, 20) + roll_dice(1, 12) + roll_dice(2, 8));
		}
		case 29:
		{
			return (roll_dice(1, 20) + roll_dice(1, 12) + roll_dice(1, 10) + roll_dice(1, 8));
		}
		case 30:
		{
			return (roll_dice(2, 20) + roll_dice(2, 6));
		}
		case 31:
		{
			return (roll_dice(2, 20) + roll_dice(1, 8) + roll_dice(1, 6));
		}
		case 32:
		{
			return (roll_dice(2, 20) + roll_dice(2, 8));
		}
		case 33:
		{
			return (roll_dice(2, 20) + roll_dice(1, 10) + roll_dice(1, 8));
		}
		case 34:
		{
			return (roll_dice(2, 20) + roll_dice(2, 10));
		}
		case 35:
		{
			return (roll_dice(2, 20) + roll_dice(1, 12) + roll_dice(1, 10));
		}
		case 36:
		{
			return (roll_dice(2, 20) + roll_dice(2, 12));
		}
		case 37:
		{
			return (roll_dice(2, 20) + roll_dice(1, 12) + roll_dice(2, 6));
		}
		case 38:
		{
			return (roll_dice(2, 20) + roll_dice(1, 12) + roll_dice(1, 8) + roll_dice(1, 6));
		}
		case 39:
		{
			return (roll_dice(2, 20) + roll_dice(1, 12) + roll_dice(2, 8));
		}
		case 40:
		{
			return (roll_dice(2, 20) + roll_dice(1, 12) + roll_dice(1, 10) + roll_dice(1, 8));
		}
		default:
		{
			return 0;
		}
	}
}

int main(int argc, char *argv[])
{
	srand(time(0));
	printf("%d\n", step(atoi(argv[1])));

	return 1;
}