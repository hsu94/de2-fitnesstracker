#ifndef GRAPHICS_H_
#define GRAPHICS_H_

typedef struct { int x,y;} XYPixel ;

// Drawing Lines
void WriteAPixel(int x, int y, int Colour);
int ReadAPixel(int x, int y);
void ProgramPalette(int PaletteNumber, int RGB);
void HLine(int x1, int y1, int length, int Colour);
void VLine(int x1, int y1, int length, int Colour);
void Line(int x1, int y1, int x2, int y2, int Colour);

// Functions for Text
void OutGraphicsCharFont1(int x, int y, int fontcolour, int backgroundcolour, int c, int Erase);
void OutGraphicsCharFont2a(int x, int y, int colour, int backgroundcolour, int c, int Erase);
void OutGraphicsCharFont2b(int x, int y, int colour, int backgroundcolour, int c, int Erase);
void OutGraphicsCharFont3(int x, int y, int colour, int backgroundcolour, int c, int Erase);
void OutGraphicsCharFont4(int x, int y, int colour, int backgroundcolour, int c, int Erase);

// Fill Colour
int PushPixel(XYPixel p1);
int PopPixel(XYPixel *theXYPixel);
int IsStackEmpty(void);
void Fill(int _x, int _y, int _FillColour, int _BoundaryColour);

// Functions to draw shapes
void DrawRec(int x1, int y1, int x2, int y2, int Colour);
void DrawTri(int x1, int y1, int x2, int y2, int x3, int y3, int colour);
void DrawSq(int x1, int y2, int length, int Colour);
void DrawCir(int x1, int y1, int radius, int Colour);

#endif
