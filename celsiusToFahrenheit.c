#!/usr/bin/tcc -run
#include <stdio.h>

float fahrenheitToCelsius(float degFahrenheit);
float celsiusToFahrenheit(float degCelsius);
float fahrenheitToKelvin(float degFahrenheit);
float celsiusToKelvin(float degCelsius);
void menu(void);

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

/* i use function for this to keep it as modular? as possible */
void menu(void)
{
	float degFahrenheit;
	float degCelsius;
	int selection = 0;
	printf("1: Convert Celsius to Fahrenheit.\n"
		"2: Convert Fahrenheit to Celsius.\n"
		"3: Convert Celsius to Kelvin.\n"
		"4: Convert Fahrenheit to Kelvin.\n"
		"Select: ");
	scanf("%1d", &selection);

	switch (selection) {
	case 1:
		printf("Input temperature in Celsius: ");
		scanf("%5f", &degCelsius);
		printf("%.1f C is %.1f F\n",
			degCelsius, celsiusToFahrenheit(degCelsius));
		break;
	case 2:
		printf("Input temperature in Fahrenheit: ");
		scanf("%5f", &degFahrenheit);
		printf("%.1f F is %.1f C\n",
			degFahrenheit, fahrenheitToCelsius(degFahrenheit));
		break;
	case 3:
		printf("Input temperature in Celsius: ");
		scanf("%5f", &degCelsius);
		printf("%.1f C is %.1f K\n",
			degCelsius, celsiusToKelvin(degCelsius));
		break;
	case 4:
		printf("Input temperature in Fahrenheit: ");
		scanf("%5f", &degFahrenheit);
		printf("%.1f F is %.1f K\n",
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
