#include <string.h>

const char *bool_to_word (int value){
  return (value == false) ? "No":"Yes";
}