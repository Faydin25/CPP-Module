# include "iter.h"

int main(){
	std::string strArray[] = {"ab", "bc", "cd"};
	::iter(strArray, 3, &func);
}