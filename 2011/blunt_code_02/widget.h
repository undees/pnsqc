class Widget
{
public:
    // ...

private:
    int vim;
    int vigor;
    int Pizazz() { return vim * vigor; }

    friend class WidgetTest;
};
