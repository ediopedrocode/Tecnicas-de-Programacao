#include <iostream>

using namespace std;

class Point2d{
    private:
        float m_x;
        float m_y;
    public:
        Point2d();
        Point2d(float x, float y);

        void setM_X(float a);
        float getM_X();

        void setM_Y(float b);
        float getM_Y();

        void print();
        float distancia(Point2d f);
};