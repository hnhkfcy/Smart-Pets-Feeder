#ifndef CAM_THREAD_H
#define CAM_THREAD_H

#include "CppThread.h"

class CamThread : public CppThread {

public:
	//CamThread(int _offset) {
	//	offset = _offset;
	//}
	int fd;
private:
	void run();

private:
	int offset;
};

#endif
