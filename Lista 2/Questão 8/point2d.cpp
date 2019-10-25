#include <iostream>
#include "point2d.h"
#include <cmath>

using namespace std;

Point2d::Point2d(){
    setM_X(0);
    setM_Y(0);
}

Point2d::Point2d(float x, float y){
    setM_X(x);
    setM_Y(y);
}

void Point2d::setM_X(float a){
    m_x=a;
}

void Point2d::setM_Y(float b){
    m_y=b;
}

float Point2d::getM_X(){
    return m_x;
}

float Point2d::getM_Y(){
    return m_y;
}

void Point2d::print(){
    cout << "Point2d(" << getM_X() << ", " << getM_Y() << ");" << endl;
}

float Point2d::distancia(Point2d f){
    float x1 = m_x;
    float y1 = m_y;
    float x2 = f.getM_X();
    float y2 = f.getM_Y();
    return sqrt ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}