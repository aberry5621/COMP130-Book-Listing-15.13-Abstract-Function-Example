//
//  AbstractGeometricObject.cpp
//  COMP130 Book Listing 15.13 Abstract Function Example
//
//  Created by ax on 11/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "AbstractGeometricObject.h"

/*
 Implement Geometric Objects
 */

// geometric object class constructor
GeometricObject::GeometricObject() {
    color = "white";
    filled = false;
}

// constructor with specified color / fill
GeometricObject::GeometricObject(const string& color, bool filled) {
    setColor(color);
    setFilled(filled);
}

// getter function returns color as a string
string GeometricObject::getColor() const {
    return color;
}

// setter function sets color
void GeometricObject::setColor(const string& color) {
    this->color = color;
}

// getter function returns state of filled yes / no
bool GeometricObject::isFilled() const {
    return filled;
}

// setter function sets filled to yes / no
void GeometricObject::setFilled(bool filled) {
    this->filled = filled;
}

// gets string version of object
string GeometricObject::toString() const {
    return "A Geometric Object (is returned by string)";
}

