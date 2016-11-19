#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

private:
    int LEng;
    int REng;

    float XAngle;
    float YAngle;
public:
    int GetLeft();
    int GetRight();

    void SetXAngle();
    float GetXAngle();
    void SetYAngle();
    float GetYAngle();

#endif // FLIGHT_H_INCLUDED
