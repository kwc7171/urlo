#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>
#include <unistd.h>

#define SERVO 1

int main()
{
  char str;
  
  if(wiringPiSetup() == 1)
    return 1;
  softPwmCreate(SERVO, 0, 200);
  
  while(1)
  {
    fputs("select r, l, 1 : ", stdout);
    scanf("%c", &str);
    getchar();
    if(str == 'r')
    {
      softPwmWrite(SERVO, 24);
      usleep(50000);
      softPwmWrite(SERVO, 0);
    }
    else if(str =='l')
    {
      softPwmWrite(SERVO, %);
      usleep(50000);
      softPwmWrite(SERVO, 0);
      }
      else if ( str == 'q') return 0;
      }
      return0;
}  