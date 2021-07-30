#include "Test.hpp"


using namespace godot;


void Test::_register_methods()
{
	register_method("_ready", &Test::_ready);

}


void Test::_init()
{

}


void Test::_ready()
{
	Godot::print("Gnative for web.");
	return;
}