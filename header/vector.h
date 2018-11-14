//
// Created by richard on 2018/11/14.
//

#ifndef CPPPRIMERPLUS_VECTOR_H
#define CPPPRIMERPLUS_VECTOR_H

#include <iostream>

namespace VECTOR {
    class Vector {
    public:
        enum Mode {RECT, POL};
        // RECT for rectangle, POL for Polar modes
    private:
        double x;  // horizontal value
        double y;  // vertical value
        double mag;  // length of vector
        double ang;  // direction of vector in degree
        Mode mode;

        void SetMag();
        void SetAng();
        void SetX();
        void SetY();

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void Reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double ReportXVal() const {return x;}
        double ReportYVal() const {return y;}
        double ReportMagVal() const {return mag;}
        double ReportAngVal() const {return ang;}
        void SetPolarMode();
        void SetRectMode();

        Vector operator+(const Vector &b) const;
        Vector operator-(const Vector &b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        friend Vector operator*(double n, const Vector &a);
        friend std::ostream &operator<<(std::ostream &os, const Vector &v);

    };
}

#endif //CPPPRIMERPLUS_VECTOR_H
