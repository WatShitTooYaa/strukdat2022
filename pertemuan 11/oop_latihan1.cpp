#include <iostream>
using namespace std;

class MHS {
	public:
	    string MHSname;
	    void printname(){
	        cout << "MHS name is : " << MHSname << endl;
	    }
};

int main(){
    MHS mhs1;
    mhs1.MHSname = "tes";
    mhs1.printname();
	mhs1.printname(bagio);
    return 0;
}
