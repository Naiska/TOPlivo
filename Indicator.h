#ifndef INDICATOR_H_INCLUDED
#define INDICATOR_H_INCLUDED
class Indicator:DisplayObj
{
    private:
        int value;
        int MaxVal;
        float angle;

        int scale;
    public:
        int GetVal();
        float GetAngle();

        void SetVal(int);
        void SetMax(int);
};
#endif // INDICATOR_H_INCLUDED
