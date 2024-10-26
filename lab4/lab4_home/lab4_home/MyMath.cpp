#include "MyMath.h"

int MyMath::operation = 0;

float MyMath::Add(float a, float b)
{
    operation++;
    return a+b;
}

float MyMath::Sub(float a, float b)
{
    operation++;
    return a-b;
}

float MyMath::Mult(float a, float b)
{
    operation++;
    return a*b;
}

float MyMath::Div(float a, float b)
{
    operation++;
    return a/b;
}

int MyMath::getOperation()
{
    return operation;
}
