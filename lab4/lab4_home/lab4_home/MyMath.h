#pragma once
class MyMath
{
private:
	static int operation;
public:
	static float Add(float a, float b);
	static float Sub(float a, float b);
	static float Mult(float a, float b);
	static float Div(float a, float b);

	static int getOperation();
};

