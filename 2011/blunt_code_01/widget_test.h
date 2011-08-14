#include <assert.h>

class WidgetTest
{
public:
    void TestPizazz()
    {
        Widget w;
        w.vim   = 2;
        w.vigor = 5;
        assert(w.Pizazz() == 10);
    }
};
