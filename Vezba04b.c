// Vezba04b.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <stdio.h>
int main()
{
	// SOPSTVENI/KORISNICKI TIP
	typedef long long int llint;
	llint a = 1234567890123456789;
	printf("a = %lld\n", a);
	// NABROJIVI TIP
	enum dan { pon=1, uto, sre, cet, pet, sub, ned };
	enum dan prvi = ned;
	if (prvi == pon)
		printf("prvi je ponedeljak\n");
	if (prvi == 7)
		printf("prvi je nedelja\n");
}
