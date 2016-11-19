#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

private:
    Indicator iLfuel;
    Indicator iRfuel;
    Button ButtL1;
    Button ButtL2;
    Button ButtR1;
    Button ButtR2;
    Button Ring;

public:
    Display(int)

    void tick();
    bool TbuttL1();
    bool TbuttL2();
    bool TbuttR1();
    bool TbuttR2();


#endif // DISPLAY_H_INCLUDED
