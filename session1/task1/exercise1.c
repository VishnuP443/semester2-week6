#include <stdio.h>
#include <stdlib.h>

int compute_fine(int driver_speed, int speed_limit)
{
  int fine = 0;

  if (driver_speed > speed_limit)
  {
    
    int excess_speed = driver_speed - speed_limit;

    if (excess_speed <= 10)
    {
      fine = 50;
    }

    else if (excess_speed <= 20)
    {
      fine = 100;
    }

    else
    {
      fine = 200;
    }

    printf("Fine: $%d\n", fine);
  }

  else
  {
    printf("No fine needed.\n");
  }

  return fine;

}

int get_user_input(char *question)
{

  char input[20];
  int temp = 0;
  printf("%s", question);

  if (fgets(input, sizeof(input), stdin))
  {
    sscanf(input, "%d", &temp);
  }

  return temp;

}

int main()
{
  int speed_limit, driver_speed, fine = 0;


  speed_limit = get_user_input("Enter the speed limit: ");

  driver_speed = get_user_input("Enter the driver's speed: ");

  fine = compute_fine(driver_speed, speed_limit);

  return 0;
}