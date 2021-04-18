#ifndef CAM_THREAD_H
#define CAM_THREAD_H

#include "CppThread.h"

class CamThread : public CppThread {

public:
    int fd;
private:
	void run();


};

#endif
