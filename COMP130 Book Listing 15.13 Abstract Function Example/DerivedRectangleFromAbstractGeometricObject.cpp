//
//  DerivedRectangle.cpp
//  COMP130 Book Listing 15.1
//
//  Created by ax on 11/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "DerivedRectangleFromAbstractGeometricObject.h"

// construct a default rectangle object
Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

// construct a rectangle object with a sepcified width adn height
Rectangle::Rectangle(double width, double height) {
    setWidth(width);
    setHeight(height);
}

// construct rectangle with height, width, color and fill set
Rectangle::Rectangle(double width, double height, const string& color, bool filled) {
    setWidth(width);
    setHeight(height);
    setColor(color);
    setFilled(filled);
}

// getter: return width
double Rectangle::getWidth() const {
    return width;
}

// set a new width
void Rectangle::setWidth(double width) {
    this->width = (width >= 0) ? width : 0;
}

// return height of this rectangle
double Rectangle::getHeight() const {
    return height;
}

// set new height
void Rectangle::setHeight(double height) {
    this->height = (height >= 0) ? height : 0;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}