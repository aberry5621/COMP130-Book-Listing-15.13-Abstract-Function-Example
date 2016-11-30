//
//  AbstractGeometricObject.h
//  COMP130 Book Listing 15.13 Abstract Function Example
//
//  Created by ax on 11/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#ifndef AbstractGeometricObject_h
#define AbstractGeometricObject_h

#include <string>
using namespace std;

class GeometricObject {
protected:
    GeometricObject(); // geometric object class constructor
    GeometricObject(const string& color, bool filled); // constructor with specified color / fill
public:
    string getColor() const; // getter function returns color as a string
    void setColor(const string& color); // setter function sets color
    bool isFilled() const; // getter function returns state of filled yes / no
    void setFilled(bool filled); // setter function sets filled to yes / no
    string toString() const; // gets string version of object
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
private:
    string color;
    bool filled;
};

#endif /* AbstractGeometricObject_h */
