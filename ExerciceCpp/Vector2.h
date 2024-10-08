
#ifndef POINT_H__
#define POINT_H__


class Vector2 {
private:
    float x;
    float y;

public:
    Vector2(float, float); //Constructeur

    // Setter
    void setVector2(float _x, float _y);
    void SetX(float _x);
    void SetY(float _y);
    // Getters
    float getX();
    float getY();

};

#endif
