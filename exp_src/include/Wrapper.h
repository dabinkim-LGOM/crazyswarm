#ifndef WRAPPER_H_
#define WRAPPER_H_

#include <libmotioncapture/motioncapture.h>

namespace RemoteControl{
    class Wrapper{
        private:
        libmotioncapture::MotionCapture* mocap;

        void receiveMocapData();
        
        public:
        Wrapper();

        
    };
}



#endif