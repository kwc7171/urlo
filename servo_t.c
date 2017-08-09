#include <stdio.h>
#include <wiringPi.h>

#define SERVO 0 // BCM_GPIO 24

#define RANGE 100


int main (void)
{
  if (wiringPiSetup() == -1) {
    return 1 ;
  }

  softPwmCreate(SERVO, 0, RANGE); 

  for (;;)
  {
    softPwmWrite(SERVO, 15);
    delay (1000) ;

    softPwmWrite(SERVO, 10);
    delay (1000) ;
    
    softPwmWrite(SERVO, 20);
    delay (1000) ;

    softPwmWrite(SERVO, 10);
    delay (1000) ;
  }
    
  return 0 ;
}