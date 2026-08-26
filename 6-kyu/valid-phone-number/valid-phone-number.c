#include <stdbool.h>
​
bool valid_phone_number(const char* number) {
  int count=4;
  if(strlen(number)>14||strlen(number)<14)
    return false;
  else{
    if(number[0]=='('&&number[4]==')'&&number[5]==' '&&number[9]=='-'){
      for (int i = 0; i < 14; i++) {
            if (i ==0 && i ==4 && i  == 5 && i ==9) {
               continue; 
            }
​
            if (number[i] >= '0' && number[i] <= '9') { 
              count++;
        }
    }
      if(count==14)
        return true;
      }
    else
      return false;
  }
}