//
//  main.cpp
//  COMP130 Book Listing 15.13 Abstract Function Example
//
//  Created by ax on 11/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "AbstractGeometricObject.h"
#include "DerivedCircleFromAbstractGeometricObject.h"
#include "DerivedRectangleFromAbstractGeometricObject.h"
#include <iostream>
using namespace std;

// function for display geometric object
bool equalArea(const GeometricObject& g1, const GeometricObject& g2) {
    return g1.getArea() == g2.getArea();
}

void displayGeometricObject(const GeometricObject& g) {
    cout << "The area is " << g.getArea() << endl;
    cout << "The perimeter is " << g.getPerimeter() << endl;
}

int main() {
    // test the virtual functions
    
    cout << "This is just a test!!\n";
    
    // construct circle object
    Circle circle(5);
    // construct rectangle
    Rectangle rectangle(5, 3);
    
    cout << "Circle info: " << endl;
    displayGeometricObject(circle);
    
    cout << endl;
    
    cout << "Rectangle info: " << endl;
    displayGeometricObject(rectangle);
    
    cout << endl;
    
    cout << "Do the two objects have the same area?: " << (equalArea(circle, rectangle) ? "Yes" : "No") << endl;
    
    return 0;
}
