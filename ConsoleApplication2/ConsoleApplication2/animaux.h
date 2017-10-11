#pragma once
class animaux
{
public:
	animaux();
	~animaux();
	// mange des trucs
	int Mange();
	virtual int SeReproduire() = 0;
};

