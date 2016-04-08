#include <unistd.h>
#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

void print_usage(char** argv) {
	cout<<argv[0]<<" mem_size_in_mb"<<endl;
}

int main(int argc, char** argv) {


	// 256 MB
	int size = 256;


	if(argc==1) {
		print_usage(argv);
		return 0;
	} else {
		size = std::stoi(string(argv[1]));
	}

	auto start = clock();

	cout<<"allocating mem for "	<<size<<" MB"<<endl;

	long long length = (long long)size*1024*1024/sizeof(int);
	

	int* buf = new int[length];
	
	cout<<"memory allocated in "<< (clock()-start)*1.0 / CLOCKS_PER_SEC << " s"<<endl;
	
	start = clock();

	cout<<"filling memory"<<endl;

	for(long long i=0;i<length;++i) {
		buf[i] = i;
	}
	
	cout<<"memory filled in "<< (clock()-start)*1.0 / CLOCKS_PER_SEC << " s"<<endl;

	if(buf==0) {
		cout<<"Error! failed to allocate memory!"<<endl;
		return -1;
	}

	cout<<"looping..."<<endl;

	while(true) {
		sleep(1);
	}

	return 0;
}
