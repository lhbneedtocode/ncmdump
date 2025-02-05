#include "include/cssopts.hpp"
#include "include/main.hpp"
int main(int argc, char** argv){
	cout<<argc<<endl;
	for(auto i = 0 ; i < argc ; i++){
		cout<<argv[i]<<endl;
	}
	std::cout<<"hello first"<<std::endl;
	return 0;	

}
