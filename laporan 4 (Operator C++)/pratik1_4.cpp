#include <iostream> 
/*include berfungsi mengimpor file atau pun library lain
<iostream> adalah library yang didalamnya definisi fungsi yang sudah dibuat*/
using namespace std; 
/*using berarti memanggil
namespace berati ruang kerja sebagai patokan penulisan fungsi selanjutnya
standar adalah jenis ruang kerja yang digunakan dengan adanya fungsi standar.
kita jadi lebih mudah menulis yang sebelumnya std::cout menjadi cout */

int main(){ 
/* int merupakan tipe data, selain int tipe data yang bisa digunakan adalah void
main adalah fungsi utama agar program dapat dijalankan
() adalah tempat dimana kita memberikan parameter pada fungsi, di fungsi utama hal ini tidak dibutuhkan
{ merupakan blok pembuka yang mengisyaratkan semua kode didalam merupakan definisi dari fungsi utama*/
	
	int M=5; /*int (integer) adalah tipe data untuk variabel M dengan bilangan bulat 
				M adalah varibel yang memiliki nilai sama dengan lima
				; adalah fungsi untuk mengakhiri fungsi atau kode*/
	float D; /*float adalah tipe data untuk variabel D dengan bilangan desimal sebanyak 7 digit
				D adalah varibel yang belum diberi nilai atau akan digunakan pada proses selanjutnya*/
	D = -18.12; /*D adalah variabel yang akan di proses
				= befungsi untuk penyamaan variabel d dan nilai setelahnya
				-18.12 adalah nilai integer yang sama atau dilambangkan dengan variabel D
				-18.12 juga merupakan contoh operator unary negatif*/ 
	
	cout<<"Nilai M "<<M<<endl;
	/*cout adalah fungsi atau perintah menampilkan sesuatu ketika program dijalankan
	<< adalah tanpa output yang digunakan setelah cout atau setelah variabel/perintah
	"" adalah kode untuk menampilkan tulisan yang ada didalam tanda petik tesebut
	Nilai M adalah tulisan yang akan di tampilkan di monitor
	M adalah nilai pada variabel yang akan di tampilkan sesuai dengan proses sebelumnya
	endl adalan endline untuk mengakhiri baris
	; adalah fungsi untuk mengakhiri perintah cout 
	*/
	cout<<"Nilai D "<<D<<endl;
	/*	Nilai D adalah tulisan yang akan di tampilkan di monitor
	D adalah nilai pada variabel yang akan di tampilkan sesuai dengan proses sebelumnya*/
	
	return 0;/*return 0 berfungsi mengakhiri fungsi main() dan memberitahu pada sistem informasi 
	program berakhir dengan normal tanpa keslahan yang di tampilkan dengan nilai 0*/
} //} merupakan blok penutup dari blok pembuka sebelumnya


