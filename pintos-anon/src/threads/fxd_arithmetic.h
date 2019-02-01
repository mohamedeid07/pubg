#include <stdint.h>

#define F 16384

int toFxd(int a);
int toIntFloor(int a);
int toIntRound(int a);
int addInt(int a, int b);
int addFxd(int a, int b);
int subInt(int a, int b);
int subFxd(int a, int b);
int mulInt(int a, int b);
int mulFxd(int a, int b);
int divInt(int a, int b);
int divFxd(int a, int b);

int toFxd(int a)
{
	return a * F;
}

int toIntFloor(int a)
{
	return a / F;
}

int toIntRound(int a)
{
	if (a>=0)
		return (a + F/2) / F;
	else
		return (a - F/2) / F;
}

int addInt(int a, int b)
{
	return a + (b * F);
}

int addFxd(int a, int b)
{
	return a + b;
}

int subInt(int a, int b)
{
	return a - (b * F);
}

int subFxd(int a, int b)
{
	return a - b;
}

int mulInt(int a, int b)
{
	return a * b;
}

int mulFxd(int a, int b)
{
	return ((int64_t) a) * b / F;
}

int divInt(int a, int b)
{
	return a / b;
}

int divFxd(int a, int b)
{
	return ((int64_t) a) * F / b;
}
