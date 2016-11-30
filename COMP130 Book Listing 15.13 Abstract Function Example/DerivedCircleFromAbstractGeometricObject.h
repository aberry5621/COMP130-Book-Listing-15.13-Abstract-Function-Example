//
//  DerivedCircleFromAbstractGeometricObject.hpp
//  COMP130 Book Listing 15.13 Abstract Function Example
//
//  Created by ax on 11/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#ifndef DerivedCircleFromAbstractGeometricObject_h
#define DerivedCircleFromAbstractGeometricObject_h

// include parent / base / superclass - right?
#include "AbstractGeometricObject.h"

class Circle: public GeometricObject {
public:
    Circle();
    Circle(double);
    Circle(double radius, const string& color, bool filled);
    double getRadius() const;
    void setRadius(double);
    double getArea() const;
    double getPerimeter() const;
    double getDiameter() const;
private:
    double radius;
};

#endif /* DerivedCircleFromAbstractGeometricObject_h */
