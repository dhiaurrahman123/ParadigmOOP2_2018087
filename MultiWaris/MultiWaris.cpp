

#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\n" << endl;
    }
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }
};
class manusia {
public:
    string jeniskelamin;
    manusia(string pjeniskelamin) :
        jeniskelamin(pjeniskelamin) {
        cout << "manusia dibuat\n" << endl;
    }
    ~manusia() {
        cout << "manusia dihapus\n" << endl;
    }
};
class pelajar : private manusia, public orang {
public:
    string sekolah;
    pelajar(string pNama, string pjeniskelamin, string psekolah) :
        orang(pNama),
        manusia(pjeniskelamin),
        sekolah(psekolah) {
        cout << "pelajar dibuat\n" << endl;
    }
    ~pelajar() {
        cout << "pelajar dihapus\n" << endl;
    }
    string perkenalan() {
        return"Halo,nama saya " + nama + "dengan jenis kelamin" + jeniskelamin + "darisekolah" + sekolah + "\n\n";

    }
};
int main()
{
    pelajar siswa("andi laksonoi", "laki-laki", "SMAN 1 bantul");
    cout << siswa.perkenalan();
    return 0;

