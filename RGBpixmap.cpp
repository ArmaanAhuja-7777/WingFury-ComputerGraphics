// RGBpixmap.cpp
#include "RGBpixmap.h"
#include <iostream>

using namespace std;

std::fstream inf;
GLubyte checkImage[512][512][4];  // Define global variable

ushort getShort() {
    char ic;
    ushort ip;
    inf.get(ic); ip = ic;
    inf.get(ic); ip |= ((ushort)ic << 8);
    return ip;
}

ulong getLong() {
    ulong ip = 0;
    char ic = 0;
    unsigned char uc = ic;
    inf.get(ic); uc = ic; ip = uc;
    inf.get(ic); uc = ic; ip |= ((ulong)uc << 8);
    inf.get(ic); uc = ic; ip |= ((ulong)uc << 16);
    inf.get(ic); uc = ic; ip |= ((ulong)uc << 24);
    return ip;
}

// Copy the class method definitions: makeCheckerBoard, setTexture, makeCheckImage, readBMPFile here
// (already written in your message – just keep them unchanged)
