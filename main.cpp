#include <iostream>

using namespace std;
class kisi{
	public:
	string ad;
	string soyad;
	int no;
	void yazdir(){
		cout<<"adi:"<<ad<<endl;
		cout<<"soyadi:"<<soyad<<endl;
		cout<<"no:"<<no<<endl;
	}
	kisi(){
		cout<<"yapici metod calisti"<<endl;
	}
	kisi(string a){
			cout<<" tek parametreli yapici metod calisti"<<endl;
		ad=a;
	}
		kisi(string a,string b,int c){
			ad=a;
			soyad=b;
			no=c;
			cout<<" 3 parametreli yapici metod calisti"<<endl;
	
	}
};

int main(int argc, char** argv) {
	kisi kisi1;
	kisi kisi2("ibrahim");
	kisi kisi3("mehmet","berk",412907);
	kisi1.yazdir();
	kisi2.yazdir();
	kisi3.yazdir();
	
	return 0;
}
