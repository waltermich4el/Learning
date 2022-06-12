#include <stdbool.h>
#include <math.h>
#include <stdint.h>

bool is_narcissistic(long long unsigned x){

  long long unsigned int input_num = x, copy_input = x, digit = 0, rem = 0, sum = 0;
  
  while(copy_input !=0){ //when the copy is not equal to 0 ->exit
    copy_input /=10; // we cast to int this divsion so that the decimal is lost
    ++digit; // with each iteration we increase the number of the digit
    // when the copy of the input is equal to 0 then we take the last value of the digit
    
  }
  
  while(input_num !=0){//we apply the same concept
    rem = input_num%10;// taking each digit 
    sum = sum + pow(rem,digit);// increase size of sum with each iteration and power the the remainder
    input_num /=10;  // advance on more digit
      }
  if(sum==x){// print according to condition
    return true;
  }
  else
    return false;
  }