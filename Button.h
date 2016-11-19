#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED

class Button:DisplayObj
{
    private:
        bool IsOn;
    public:
        bool GetState();
        bool Push();
};
#endif // BUTTON_H_INCLUDED
