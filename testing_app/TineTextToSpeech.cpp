// TineTextToSpeech.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "tinytext2speech.h"

int main()
{
	// Text speaker
	ttspeech::Speaker speaker;

	speaker.speak("Hello there, I'm text to speech!");

	char input[100];
	do
	{
		std::cout << "Type text to speak: ";
		std::cin.getline(input, sizeof(input));
		speaker.speak(input);
	} while (true);
}
