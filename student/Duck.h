#pragma once
#include <iostream>
#include "Duck.h"
#include "Fly.h"
#include "Swim.h"

using namespace std;

class Duck : public Fly, public Swim
{
public:
	void duck();
};