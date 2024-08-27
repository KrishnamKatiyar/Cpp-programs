#include <iostream>
#include <string>

using namespace std;

class Medicine {
protected:
    string category;
    string date_of_manufacture;
    string company_name;

public:
    void set_medicine_details(string cat, string dom, string company) {
        category = cat;
        date_of_manufacture = dom;
        company_name = company;
    }

    string get_category() { return category; }
    string get_date_of_manufacture() { return date_of_manufacture; }
    string get_company_name() { return company_name; }
};

class Tablet : public Medicine {
protected:
    string tablet_name;
    double price;

public:
    void set_tablet_details(string name, double pr) {
        tablet_name = name;
        price = pr;
    }

    string get_tablet_name() { return tablet_name; }
    double get_price() { return price; }
};

class PainReliever : public Tablet {
private:
    int dosage_units;
    string side_effects;
    int use_within_days;

public:
    void set_pain_reliever_details(int dosage, string side_effect, int days) {
        dosage_units = dosage;
        side_effects = side_effect;
        use_within_days = days;
    }

    int get_dosage_units() { return dosage_units; }
    string get_side_effects() { return side_effects; }
    int get_use_within_days() { return use_within_days; }

    void display_details() {
        cout << "Category: " << get_category() << endl;
        cout << "Date of Manufacture: " << get_date_of_manufacture() << endl;
        cout << "Company Name: " << get_company_name() << endl;
        cout << "Tablet Name: " << get_tablet_name() << endl;
        cout << "Price: " << get_price() << endl;
        cout << "Dosage Units: " << get_dosage_units() << endl;
        cout << "Side Effects: " << get_side_effects() << endl;
        cout << "Use Within Days: " << get_use_within_days() << endl;
    }
};

int main() {
    PainReliever pain_reliever;
    pain_reliever.set_medicine_details("Analgesics", "2023-08-01", "Pharma Inc.");
    pain_reliever.set_tablet_details("PainAway", 12000.50);
    pain_reliever.set_pain_reliever_details(2, "Nausea, Drowsiness, Dizziness", 30);

    pain_reliever.display_details();

    return 0;
}

