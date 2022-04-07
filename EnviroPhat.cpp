/*
 * @Author: georgduees 
 * @Date: 2022-04-07 20:48:19 
 * @Last Modified by: georgduees
 * @Last Modified time: 2022-04-07 20:55:25
 */
#include "EnviroPhat.h"
#include "Arduino.h"

EnviroPhat::EnviroPhat(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void EnviroPhat::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void EnviroPhat::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

  git config --global user.email "you@example.com"
