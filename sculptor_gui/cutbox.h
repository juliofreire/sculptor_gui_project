#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"

class cutBox : public FiguraGeometrica
{
public:
    int x0; int x1; int y0; int y1; int z0; int z1;
    cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void draw(Sculptor &s);
};

#endif // CUTBOX_H