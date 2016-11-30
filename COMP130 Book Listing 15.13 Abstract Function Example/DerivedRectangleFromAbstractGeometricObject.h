//
//  DerivedRectangle.h
//  COMP130 Book Listing 15.1
//
//  Created by ax on 11/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#ifndef DerivedRectangle_h
#define DerivedRectangle_h

#include "AbstractGeometricObject.h"

class Rectangle: public GeometricObject {
public:
    Rectangle();
    Rectangle(double width, double height);
    Rectangle(double width, double height, const string& color, bool filled);
    double getWidth() const;
    void setWidth(double);
    double getHeight() const;
    void setHeight(double);
    double getArea() const;
    double getPerimeter() const;
private:
    double width;
    double height;
};

#endif /* DerivedRectangle_h */
