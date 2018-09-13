#include"mathly.h"

float add(float a, float b)
{
  return a +b ;
}

float subtract(float a, float b)
{
  return a - b;
}

float mult(float a, float b)
{
  return a * b;
}

float our_div(float a, float b)
{
  if (b !=0){
  return a / b;
}
else {
  return -1;
}
}
