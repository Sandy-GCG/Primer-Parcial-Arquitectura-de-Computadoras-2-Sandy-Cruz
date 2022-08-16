#include <Practica Parcial 1.h>
#define portD 0x08

unsigned int8 count;

void main()
{
   while(TRUE)
   {
      output_high(PIN_B2); // PIN_B2=1
      delay_ms(100);
      output_low(PIN_B2); // PIN_B2=0
      delay_ms(100);
      while(input(PIN_B0)==1){
         output_high(PIN_B2); // PIN_B2=1
         delay_ms(50);
         output_low(PIN_B2); // PIN_B2=0
         delay_ms(50);
      }
      if(input(PIN_B1)==1){
         output_d(count--);
         delay_ms(1);
         if(count == 256)
            count = 0;
         while(input(PIN_B1)==0)
            delay_ms(1);
      }
   }
}
