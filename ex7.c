#include <stdio.h>


int main(int argc, char* argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Xed";
  char last_name[] = "Sheen";

  printf("You are %d miles away\n",distance);
  printf("You have %f levels of power\n",power);
  printf("You have %f awesome super powers\n",super_power);
  printf("Your initial is %c \n",initial);
  printf("My first name is %s \n",first_name);
  printf("My last name is %s\n",last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at bug rate of %f",bugs,bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire universe has %ld totals bugs",universe_of_defects);
  
  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs \n",expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("This is only a %e portion of the universe.\n",part_of_universe);

  //This makes no sense, just a demo of something weird
 
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;

  printf("Which you should care %d%%.\n",care_percentage);

  for(int i =0; i< argc; i++){
    printf("%s\n",argv[i]);
  }
  return 0;

}
