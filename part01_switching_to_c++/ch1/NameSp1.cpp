#include<iostream>
namespace BestComlpl {
	void SimpleFunc(void) {
		std::cout << "Function defined by BestCompl" << std::endl;
	}
}
namespace ProgComlpl {
	void SimpleFunc(void) {
		std::cout << "Function defined by ProgCompl" << std::endl;
	}
}

int main(void) {
	BestComlpl::SimpleFunc();
	ProgComlpl::SimpleFunc();
}
