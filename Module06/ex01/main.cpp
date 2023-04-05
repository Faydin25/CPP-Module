#include "Data.hpp"

int main(void)
{
	Data dt;
	dt.a = 10;
	dt.ch = 'a';
	dt.b = true;
	Data *dtPtr = &dt;

	cout << deserialize(serialize(dtPtr))->a << endl;
	cout << deserialize(serialize(dtPtr))->ch << endl;
	cout << deserialize(serialize(dtPtr))->b << endl;

	return 0;
}