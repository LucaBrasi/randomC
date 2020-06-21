#!/usr/bin/tcc -run
#include <stdio.h>

float fahrenheitToCelsius(float degFahrenheit);
float celsiusToFahrenheit(float degCelsius);
float fahrenheitToKelvin(float degFahrenheit);
float celsiusToKelvin(float degCelsius);
void menu();

float fahrenheitToCelsius(float degFahrenheit)
{
	float celsius = (degFahrenheit - 32) / 1.8;
	return celsius;
}

float celsiusToFahrenheit(float degCelsius)
{
	float fahrenheit = degCelsius * 1.8 + 32;
	return fahrenheit; 
}

float fahrenheitToKelvin(float degFahrenheit)
{
	float kelvin = (degFahrenheit - 32) / 1.8 + 273.15;
	return kelvin;
}

float celsiusToKelvin(float degCelsius)
{
	float kelvin = degCelsius + 273.15;
	return kelvin;
}

void menu()
{
	float degFahrenheit;
	float degCelsius;
	int yksikko = 0;
	printf("1: Muunna Celsiuksesta Fahrenheittiin.\n"
		"2: Muunna Fahrenheitista Celsiukseen.\n"
		"3: Muunna Celsiuksesta Kelviniin.\n"
		"4: Muunna Fahrenheitista Kelviniin.\n"
		"Valitse: ");
	scanf("%1d", &yksikko);

	switch (yksikko) {
	case 1:
		printf("Syötä lämpötila Celsiuksena: ");
		scanf("%5f", &degCelsius);
		printf("%.1f C on %.1f F\n",
			degCelsius, celsiusToFahrenheit(degCelsius));
		break;
	case 2:
		printf("Syötä lämpötila Fahrenheittina: ");
		scanf("%5f", &degFahrenheit);
		printf("%.1f F on %.1f C\n",
			degFahrenheit, fahrenheitToCelsius(degFahrenheit));
		break;
	case 3:
		printf("Syötä lämpötila Celsiuksena: ");
		scanf("%5f", &degCelsius);
		printf("%.1f C on %.1f K\n",
			degCelsius, celsiusToKelvin(degCelsius));
		break;
	case 4:
		printf("Syötä lämpötila Fahrenheittina: ");
		scanf("%5f", &degFahrenheit);
		printf("%.1f F on %.1f K\n",
			degFahrenheit, fahrenheitToKelvin(degFahrenheit));
		break;
	default:
		break;
	}
}

int main()
{
	menu();
	return 0;
}
