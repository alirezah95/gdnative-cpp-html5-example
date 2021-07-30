#ifndef __TEST_H__
#define __TEST_H__

#include <Godot.hpp>
#include <Node2D.hpp>


namespace godot
{
	class Test: public Node2D
	{
		GODOT_CLASS(Test, Node2D)
	private:

	public:
		static void _register_methods();

		void _init();

		void _ready();

	};
}


#endif // __TEST_H__