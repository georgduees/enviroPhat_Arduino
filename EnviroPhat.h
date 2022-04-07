/*
 * @Author: georgduees 
 * @Date: 2022-04-07 20:43:00 
 * @Last Modified by: georgduees
 * @Last Modified time: 2022-04-07 20:49:28
 */
#ifdef EnviroPhat_h
#define EnviroPhat_h
#include "Arduino.h"
class EnviroPhat
{
  public:
    EnviroPhat(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};
#endif