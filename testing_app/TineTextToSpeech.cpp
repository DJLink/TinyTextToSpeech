// TineTextToSpeech.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "tinytext2speech.h"

int main()
{
	// Text speaker
	ttspeech::Speaker speaker;

    const std::string text = "Hello there, I'm text to speech!";
	
	speaker.speak(text);

	do
	{
		std::cout << '\n' << "Press a key to continue...";
	} while (std::cin.get() != '\n');
}
