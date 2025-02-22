#include <iostream>
#include <vector>
using namespace std;

class Patient {
public:
    string name;
    int age;
    string disease;
    double bill;


    Patient(string pname, int page, string pdisease, double pbill) {
        name = pname;
        age = page;
        disease = pdisease;
        bill = pbill;
    }

    void display() {
        cout << "Patient Name: " << name << "\nAge: " << age << "\nDisease: " << disease << "\nBill Amount: $" << bill << "\n\n";
    }
};

class Doctor {
public:
    string name;
    string specialty;

 
    Doctor(string dname, string dspecialty) {
        name = dname;
        specialty = dspecialty;
    }

    void display() {
        cout << "Doctor Name: " << name << "\nSpecialty: " << specialty << "\n\n";
    }
};

int main() {
    vector<Patient> patients;
    vector<Doctor> doctors;

    int numPatients, numDoctors;

   
    cout << "Enter number of patients: ";
    cin >> numPatients;
    cin.ignore(); 

    for (int i = 0; i < numPatients; i++) {
        string pname, disease;
        int page;
        double pbill;

        cout << "Enter Patient Name: ";
        getline(cin, pname);
        cout << "Enter Age: ";
        cin >> page;
        cin.ignore();
        cout << "Enter Disease: ";
        getline(cin, disease);
        cout << "Enter Bill Amount: $";
        cin >> pbill;
        cin.ignore();

        patients.push_back(Patient(pname, page, disease, pbill));
    }

   
    cout << "Enter number of doctors: ";
    cin >> numDoctors;
    cin.ignore(); 

    for (int i = 0; i < numDoctors; i++) {
        string dname, specialty;

        cout << "Enter Doctor Name: ";
        getline(cin, dname);
        cout << "Enter Specialty: ";
        getline(cin, specialty);

        doctors.push_back(Doctor(dname, specialty));
    }

   
    cout << "\n--- Patient Details ---\n";
    for (Patient p : patients) {
        p.display();
    }

 
    cout << "--- Doctor Details ---\n";
    for (Doctor d : doctors) {
        d.display();
    }

    return 0;
}
