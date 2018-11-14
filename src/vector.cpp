//
// Created by richard on 2018/11/14.
//
#include <cmath>
#include "../header/vector.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
    // compute degrees in one radian
    const double Rad_to_deg = 45.0 / atan(1.0);

    // private methods
    // calculate magnitude from x and y


    void Vector::SetMag() {
        this->mag = sqrt(this->x * this->x +
                         this->y * this->y);
    }

    void Vector::SetAng() {
        if (this->x == 0.0 && this->y == 0.0)
            this->ang = 0.0;
        else
            this->ang = atan2(y, x);
    }

    void Vector::SetX() {
        this->x = this->mag * cos(this->ang);
    }

    void Vector::SetY() {
        this->y = this->mag * sin(this->ang);
    }


    // public methods
    Vector::Vector() {
        this->x = 0.0;
        this->y = 0.0;
        this->mag = 0.0;
        this->ang = 0.0;
        this->mode = RECT;
    }

    Vector::Vector(double n1, double n2, Vector::Mode form) {
        this->mode = form;
        if (this->mode == RECT) {
            this->x = n1;
            this->y = n2;
            this->SetAng();
            this->SetMag();
        } else if (this->mode == POL) {
            this->mag = n1;
            this->ang = n2 / Rad_to_deg;
            this->SetX();
            this->SetY();
        } else {
            cout << "Incorrect 3rd argument to Vector() --";
            cout << "vector set to 0\n";
            this->x = 0.0;
            this->y = 0.0;
            this->mag = 0.0;
            this->ang = 0.0;
            this->mode = RECT;
        }

    }

    void Vector::Reset(double n1, double n2, Vector::Mode form) {
        this->mode = form;
        if (this->mode == RECT) {
            this->x = n1;
            this->y = n2;
            this->SetAng();
            this->SetMag();
        } else if (this->mode == POL) {
            this->mag = n1;
            this->ang = n2 / Rad_to_deg;
            this->SetX();
            this->SetY();
        } else {
            cout << "Incorrect 3rd argument to Vector() --";
            cout << "vector set to 0\n";
            this->x = 0.0;
            this->y = 0.0;
            this->mag = 0.0;
            this->ang = 0.0;
            this->mode = RECT;
        }

    }

    Vector::~Vector() {

    }

    void Vector::SetPolarMode() {
        this->mode = POL;
    }

    void Vector::SetRectMode() {
        this->mode = RECT;
    }

    Vector Vector::operator+(const Vector &b) const {
        return Vector(this->x + b.x, this->y + b.y);
    }

    Vector Vector::operator-(const Vector &b) const {
        return Vector(this->x - b.x, this->y - b.y);
    }

    Vector Vector::operator-() const {
        return Vector(-this->x, -this->y);
    }


}
