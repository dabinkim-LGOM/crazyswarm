#include <Wrapper.h>

namespace RemoteControl{
    Wrapper::Wrapper(){
        std::map<std::string, std::string> cfg;
        cfg["hostname"] = "";
        mocap = libmotioncapture::MotionCapture::connect("optitrack", cfg);

    }

    void Wrapper::receiveMocapData(){
        
    }
}