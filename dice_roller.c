// Shane Ferrell

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

uint32_t roll_dice(uint32_t sides)
{
	return (rand() % sides) + 1;
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
			int sum = 0;
			int roll;

			do
			{
				roll = roll_dice(6);
				sum	+= roll;
			} while(roll == 6);

			return sum;
		}
		case 5:
		{
			int sum = 0;
			int roll;

			do
			{
				roll = roll_dice(8);
				sum	+= roll;
			} while(roll == 8);

			return sum;	
		}	
		case 6:
		{
			int sum = 0;
			int roll;

			do
			{
				roll = roll_dice(10);
				sum	+= roll;
			} while(roll == 10);

			return sum;	
		}
		case 7:
		{
			int sum = 0;
			int roll;

			do
			{
				roll = roll_dice(12);
				sum += roll;
			} while(roll == 12);

			return sum;	
		}
		case 8:
		{

		}
		default:
		{
			return 1;
		}
	}
}

int main()
{
	srand(time(0));

	return 1;
}