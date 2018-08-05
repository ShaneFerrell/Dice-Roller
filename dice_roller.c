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
		case 41:
		{
			return roll_dice(20, 3) + roll_dice(6, 3);
		}
		case 42:
		{
			return roll_dice(20, 3) + roll_dice(8, 2) + roll_dice(6, 2);
		}
		case 43:
		{
			return roll_dice(20, 3) + roll_dice(8, 3);
 		}
		case 44:
		{
			return roll_dice(20, 3) + roll_dice(10, 2) + roll_dice(8, 2);
		}
		case 45:
		{
			return roll_dice(20, 3) + roll_dice(10, 3);
		}
		case 46:
		{
			return roll_dice(20, 3) + roll_dice(12, 2) + roll_dice(10, 2);
		}
		case 47:
		{
			return roll_dice(20, 3) + roll_dice(12, 3);
		}
		case 48:
		{
			return roll_dice(20, 3) + roll_dice(20, 3) + roll_dice(12, 2) + roll_dice(6, 3);
		}
		case 49:
		{
			return roll_dice(20, 3) + roll_dice(12, 2) + roll_dice(8, 2) + roll_dice(6, 2);
		}
		case 50:
		{
			return roll_dice(20, 3) + roll_dice(12, 2) + roll_dice(8, 3);
		}
		case 51:
		{
			return roll_dice(20, 3) + roll_dice(12, 2) + roll_dice(10, 2) + roll_dice(8, 2);
		}
		case 52:
		{
			return roll_dice(20, 4) + roll_dice(6, 4);
		}
		case 53:
		{
			return roll_dice(20, 4) + roll_dice(8, 3) + roll_dice(6, 3);
		}
		case 54:
		{
			return roll_dice(20, 4) + roll_dice(8, 4);
		}
		case 55:
		{
			return roll_dice(20, 4) + roll_dice(10, 3) + roll_dice(8, 3);
		}
		case 56:
		{
			return roll_dice(20, 4) + roll_dice(10, 4);
		}
		case 57:
		{
			return roll_dice(20, 4) + roll_dice(12, 3) + roll_dice(10, 3);
		}
		case 58:
		{
			return roll_dice(20, 4) + roll_dice(12, 4);
		}
		case 59:
		{
			return roll_dice(20, 4) + roll_dice(12, 3) + roll_dice(6, 4);
		}
		case 60:
		{
			return roll_dice(20, 4) + roll_dice(12, 3) + roll_dice(8, 3);
		}
		case 61:
		{
			return roll_dice(20, 4) + roll_dice(12, 3) + roll_dice(8, 4);
		}
		case 62:
		{
			return roll_dice(20, 4) + roll_dice(12, 3) + roll_dice(10, 3) + roll_dice(8, 3);
		}
		case 63:
		{
			return roll_dice(20, 5) + roll_dice(6, 5);
		}
		case 64:
		{
			return roll_dice(20, 5) + roll_dice(8, 4) + roll_dice(6, 4);
		}
		case 65:
		{
			return roll_dice(20, 5) + roll_dice(8, 5);
		}
		case 66:
		{
			return roll_dice(20, 5) + roll_dice(10, 4) + roll_dice(8, 4);
		}
		case 67:
		{
			return roll_dice(20, 5) + roll_dice(10, 5);
		}
		case 68:
		{
			return roll_dice(20, 5) + roll_dice(12, 4) + roll_dice(10, 4);
		}
		case 69:
		{
			return roll_dice(20, 5) + roll_dice(12, 5);
		}
		case 70:
		{
			return roll_dice(20, 5) + roll_dice(12, 4) + roll_dice(6, 4);
		}
		case 71:
		{
			return roll_dice(20, 5) + roll_dice(12, 4) + roll_dice(8, 4) + roll_dice(6, 4);
		}
		case 72:
		{
			return roll_dice(20, 5) + roll_dice(12, 4) + roll_dice(8, 5);
		}
		case 73:
		{
			return roll_dice(20, 5) + roll_dice(12, 4) + roll_dice(10, 4) + roll_dice(8, 4);
		}
		case 74:
		{
			return roll_dice(20, 6) + roll_dice(6, 6);
		}
		case 75:
		{
			return roll_dice(20, 6) + roll_dice(8, 5) + roll_dice(6, 5);
		}
		case 76:
		{
			return roll_dice(20, 6) + roll_dice(8, 6);
		}
		case 77:
		{
			return roll_dice(20, 6) + roll_dice(10, 5) + roll_dice(8, 5);
		}
		case 78:
		{
			return roll_dice(20, 6) + roll_dice(10, 6);
		}
		case 79:
		{
			return roll_dice(20, 6) + roll_dice(12, 5) + roll_dice(10, 5);
		}
		case 80:
		{
			return roll_dice(20, 6) + roll_dice(12, 6);
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