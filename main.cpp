
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>

#include "shreksophone.h"

using namespace std;

int main()
{
	while (1)
	{
		int frame_index = 0;

		for (frame_index; frame_index < shrekophone_frames_count; ++frame_index)
		{
			system("CLS");
			cout << shrekophone_frames[frame_index].symbols;
			std::this_thread::sleep_for(42ms);
		}
	}

	return 0;
}
