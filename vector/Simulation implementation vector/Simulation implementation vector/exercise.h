#pragma once
namespace test
{
	template<class T>
	class vector
	{
	public:
		vector()
			:_start(nullptr)
			,_finish(nullptr)
			,
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;

	};
}