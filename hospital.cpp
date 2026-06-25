#include <iostream>
#include <vector>
using namespace std;

struct Patient {
    int id;
    string name;
    int age;
};

struct Doctor {
    int id;
    string name;
    string specialization;
};

struct Appointment {
    string patientName;
    string doctorName;
};

vector<Patient> patients;
vector<Doctor> doctors;
vector<Appointment> appointments;

void addPatient() {
    Patient p;

    cout << "\nEnter Patient ID: ";
    cin >> p.id;

    cin.ignore();

    cout << "Enter Patient Name: ";
    getline(cin, p.name);

    cout << "Enter Patient Age: ";
    cin >> p.age;

    patients.push_back(p);

    cout << "Patient Added Successfully!\n";
}

void viewPatients() {

    cout << "\n----- Patient Records -----\n";

    if (patients.empty()) {
        cout << "No Patients Found.\n";
        return;
    }

    for (auto p : patients) {
        cout << "ID: " << p.id
             << " | Name: " << p.name
             << " | Age: " << p.age << endl;
    }
}

void addDoctor() {

    Doctor d;

    cout << "\nEnter Doctor ID: ";
    cin >> d.id;

    cin.ignore();

    cout << "Enter Doctor Name: ";
    getline(cin, d.name);

    cout << "Enter Specialization: ";
    getline(cin, d.specialization);

    doctors.push_back(d);

    cout << "Doctor Added Successfully!\n";
}

void viewDoctors() {

    cout << "\n----- Doctor Records -----\n";

    if (doctors.empty()) {
        cout << "No Doctors Found.\n";
        return;
    }

    for (auto d : doctors) {
        cout << "ID: " << d.id
             << " | Name: " << d.name
             << " | Specialization: "
             << d.specialization << endl;
    }
}

void bookAppointment() {

    Appointment a;

    cin.ignore();

    cout << "\nEnter Patient Name: ";
    getline(cin, a.patientName);

    cout << "Enter Doctor Name: ";
    getline(cin, a.doctorName);

    appointments.push_back(a);

    cout << "Appointment Booked Successfully!\n";
}

void viewAppointments() {

    cout << "\n----- Appointment Records -----\n";

    if (appointments.empty()) {
        cout << "No Appointments Found.\n";
        return;
    }

    for (auto a : appointments) {
        cout << "Patient: " << a.patientName
             << " | Doctor: " << a.doctorName
             << endl;
    }
}

int main() {

    int choice;

    do {

        cout << "\n================================";
        cout << "\n HOSPITAL MANAGEMENT SYSTEM";
        cout << "\n================================";
        cout << "\n1. Add Patient";
        cout << "\n2. View Patients";
        cout << "\n3. Add Doctor";
        cout << "\n4. View Doctors";
        cout << "\n5. Book Appointment";
        cout << "\n6. View Appointments";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                addPatient();
                break;

            case 2:
                viewPatients();
                break;

            case 3:
                addDoctor();
                break;

            case 4:
                viewDoctors();
                break;

            case 5:
                bookAppointment();
                break;

            case 6:
                viewAppointments();
                break;

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}