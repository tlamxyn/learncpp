#ifndef _INPUT_H_
#define _INPUT_H_

#include <string_view>

int getIntFromConsole(std::string_view, std::string_view);

void clearIntBuffer(int *);

void clearIntBufferV2();

int getNumberInRange(int, int);

#endif