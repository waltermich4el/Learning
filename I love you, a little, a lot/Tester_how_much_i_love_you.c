#include <criterion/criterion.h>
#include <stdlib.h>

const char* how_much_i_love_you(int nb_petals);
const char* how_much_i_love_you_checker(int nb_petals);

int getRandomInteger(int lowerBoundInclusive, int upperBoundExclusive);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    cr_assert(strcmp(how_much_i_love_you(7), "I love you") == 0);
    cr_assert(strcmp(how_much_i_love_you(3), "a lot") == 0);
    cr_assert(strcmp(how_much_i_love_you(6), "not at all") == 0);    
}

Test(RandomTests, ShouldPassAllTheTestsProvided) {
  const int TEST_COUNT = 100;
  const int LOWER_BOUND = 100;
  const int UPPER_BOUND = 501;
  for (int times = 0; times < TEST_COUNT; ++times) {
    int randomValue = getRandomInteger(LOWER_BOUND, UPPER_BOUND);
    cr_assert(
      strcmp(
        how_much_i_love_you(randomValue), 
        how_much_i_love_you_checker(randomValue)
      ) == 0
    );
  }
}

const char* how_much_i_love_you_checker(int nb_petals) {
  const char *OPTIONS[] = {
    "I love you", "a little", "a lot",
    "passionately", "madly", "not at all",
  };
  const int OPTIONS_SIZE = (int)(sizeof(OPTIONS) / sizeof(OPTIONS[0]));
  return OPTIONS[(nb_petals - 1) % OPTIONS_SIZE];
}

int getRandomInteger(int lowerBoundInclusive, int upperBoundExclusive) {
  return lowerBoundInclusive + rand() / (RAND_MAX / (abs(lowerBoundInclusive) + abs(upperBoundExclusive) - 1));
}