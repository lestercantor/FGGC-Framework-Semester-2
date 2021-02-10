#include "OutputDebug.h"

OutputDebug::OutputDebug()
{
	static int x = 0;
	char sz[1024] = { 0 };
	sprintf_s(sz, "the number is %d \n", x);
	OutputDebugStringA(sz);
	x++;
}

OutputDebug::~OutputDebug()
{

}
