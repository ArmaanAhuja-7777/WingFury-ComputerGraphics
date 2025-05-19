#pragma once
// RGBpixmap.h
#ifndef RGBPIXMAP_H
#define RGBPIXMAP_H

#include <GL/freeglut.h>
#include <fstream>

// Type aliases
typedef unsigned short ushort;
typedef unsigned long ulong;
typedef unsigned char uchar;

class mRGB {
public:
    uchar r, g, b, a;
    mRGB() { r = g = b = 0; a = 255; }
};

class RGBpixmap {
public:
    int nRows, nCols;
    mRGB* pixel;
    void readBMPFile(char* frame);
    void makeCheckerBoard();
    void makeCheckImage();
    void setTexture(GLuint textureName);
};

// Declare global texture array
extern GLubyte checkImage[512][512][4];

// Declare helper functions
ushort getShort();
ulong getLong();

#endif // RGBPIXMAP_H
