# TinyTextToSpeech

## What it does

A simple and easy to use one header file to use the Text to Speech functionalities on Windows (for now). I started this class to use the OS text to speech functionalities.
For example in a game maybe this can be used to speak the current selected menu text. 
This code is not the best and it was done for a very simple application as a test, I hope it provides a good starting point for anyone looking to improve it.

## How to use

Copy tinytext2speech.h to your project
```cpp 
#include "tinytext2speech.h"
//
ttspeech::Speaker speaker;
speaker.speak("Hello world!");
````

## Sample
A small command line application is provided in VS2019 to test.

![alt text](https://github.com/DJLink/TinyTextToSpeech/raw/master/sample.png "Testing")


## Why?

I went to an accessibility talk some time ago and I remember someone mentioning a big problem was text to speech on games as the traditional solutions couldn't catch the text, so I decided to see if I could use an OS native functionalities to do so. Maybe this can help someone.

## Roadmap
My goal is to add MacOS support too, but I'm not in a hurry so there's no ETA. Linux might be a bit harder, a quick search and I couldn't find any native API that is bundled with the more common distros (needs more research).


## License
MIT License

Copyright (c) 2019 David Amador

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
