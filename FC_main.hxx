#ifndef FC_MAIN_HXX
#define FC_MAIN_HXX
#include <cstdlib>
#include <iostream>
#include <cstdio>


namespace invalpha
{
    namespace AiMo
    {
        class fcCore
        {
            public:
                fcCore();
            private:
                void DrawStartGIF();
            protected:
        };
        fcCore::fcCore()
        {
                //dev in progess
        }
        void fcCore::DrawStartGIF()
        {
            //һ�ĤΥ������`.���饹��ʹ�ä���
            GIFdrawer Gd;
            Gd.DrawBulitIn();
        }
    }
}

#endif // FC_MAIN_HXX
