#ifndef WRAPPER_H_
#define WRAPPER_H_

#include <iostream>
#include <libmotioncapture/motioncapture.h>

namespace RemoteControl{
    class Wrapper{
        private:
        libmotioncapture::MotionCapture* mocap;
        
        void receiveMocapData();
        
        public:
        Wrapper(std::string host_name);

        
    };
}



#endif