#include <iostream>
using namespace std;

class Perpustakaan {
  public:
    string tmp;
	  string BUKU[12];
	  string buku[12][1];
    int f = 0;
    void input(){
      cout<<" Masukkan data buku dengan format : kode_buku | judul_buku \n";
	    for(int i = 0; i < 12; i++){
		    for(int j = 0; j < 1; j++){
			    cout<<" Masukkan buku ke-"<<i + 1<<" : ";
			    getline(cin, buku[i][j]);
			    cin.ignore();
		    }
	    } 
    }

void proses(){
  for(int i = 0; i < 12; i++){
		for(int j = 0; j < 1; j++){
			BUKU[f] = buku[i][j]; f++;
		}
	}
	for (int i = 0; i < 12; i++){
    	for (int j = 0; j < 12 - i - 1; j++){
     		if (BUKU[j] > BUKU[j + 1]){
      			tmp = BUKU[j];
        		BUKU[j] = BUKU[j + 1];
        		BUKU[j + 1] = tmp;
      		}
    	}
  	}
}

void Outputsebelum(){
  cout<<" Sebelum diurutkan : \n";
  cout<<" Jenis Buku	| Kode Buku | Judul Buku "<<endl;
  for(int i = 0; i < 12; i++){
		for(int j = 0; j < 1; j++){
			if(i < 3){
				cout<<" Novel		| "<<buku[i][j]<<endl;
			}else if(i >= 3 && i < 6){
				cout<<" Komik		| "<<buku[i][j]<<endl;
			}else if(i >= 6 && i < 9){
				cout<<" Ensiklopedia	| "<<buku[i][j]<<endl;
			}else if(i >= 9 && i < 12){
				cout<<" Dongeng	| "<<buku[i][j]<<endl;
			}
		}
	}
	cout<<endl<<endl;
}
void Outputsesudah(){
  cout<<" Sesudah diurutkan : \n";
  cout<<" Jenis Buku	| Kode Buku | Judul Buku "<<endl;
  for(int i = 0; i < 12; i++){
		if(i < 3){
			cout<<" Novel		| "<<BUKU[i]<<endl;
		}else if(i >= 3 && i < 6){
			cout<<" Komik		| "<<BUKU[i]<<endl;
		}else if(i >= 6 && i < 9){
			cout<<" Ensiklopedia	| "<<BUKU[i]<<endl;
		}else if(i >= 9 && i < 12){
			cout<<" Dongeng	| "<<BUKU[i]<<endl;
		}
	}
}
};


int main(){
	Perpustakaan obj;
  obj.input();
  obj.Outputsebelum();
  obj.proses();
  obj.Outputsesudah();
  return 0;
  
}