#pragma once

namespace Code
{
	namespace L
	{
		struct Node
		{
			struct Node* next;
			struct Node* prev;
			int val;
		};
		int x = 0;
	}
}