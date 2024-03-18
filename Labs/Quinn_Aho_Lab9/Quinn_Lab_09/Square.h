#pragma once

class Square {
private:
    float length;

public:
    Square(float l = 0); 
    void setLength(float l); 
    float getLength() const; 
    float getArea() const; 

    Square operator+(const Square& other) const;
    Square operator*(const Square& other) const; 
};


