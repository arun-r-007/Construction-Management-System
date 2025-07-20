#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

const float GST_RATE = 18.0f;

class ConstructionProject {
private:
    int projectID;
    string projectName;
    string contractorName;
    float baseCost;
    float gstAmount;
    float totalCost;

    void calculateGST() {
        gstAmount = (baseCost * GST_RATE) / 100.0f;
        totalCost = baseCost + gstAmount;
    }

public:
    void inputDetails() {
        cout << "\nEnter Project ID: ";
        cin >> projectID;
        cin.ignore();
        cout << "Enter Project Name: ";
        getline(cin, projectName);
        cout << "Enter Contractor Name: ";
        getline(cin, contractorName);
        cout << "Enter Base Cost : ";
        cin >> baseCost;
        calculateGST();
    }

    void displayDetails() const {
        cout << left << setw(10) << projectID
             << setw(25) << projectName
             << setw(20) << contractorName
             << setw(10) << fixed << setprecision(2) << baseCost
             << setw(10) << gstAmount
             << setw(10) << totalCost
             << endl;
    }

    int getProjectID() const {
        return projectID;
    }

    void updateDetails() {
        cout << "\nUpdating Project ID: " << projectID << endl;
        cin.ignore();
        cout << "Enter New Project Name: ";
        getline(cin, projectName);
        cout << "Enter New Contractor Name: ";
        getline(cin, contractorName);
        cout << "Enter New Base Cost : ";
        cin >> baseCost;
        calculateGST();
        cout << "Project updated successfully!\n";
    }
};

// Global container for all projects
vector<ConstructionProject> projects;

// Function declarations
void addProject();
void displayProjects();
void searchProject();
void updateProject();
void deleteProject();
void printHeader();

int main() {
    int choice;

    do {
        cout << "\n**************** CONSTRUCTION MANAGEMENT SYSTEM ****************\n\n";
        cout << "1. Add Project\n";
        cout << "2. Display All Projects\n";
        cout << "3. Search Project by ID\n";
        cout << "4. Update Project\n";
        cout << "5. Delete Project\n";
        cout << "6. Exit\n";
        cout << "******************************************************************\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addProject(); break;
            case 2: displayProjects(); break;
            case 3: searchProject(); break;
            case 4: updateProject(); break;
            case 5: deleteProject(); break;
            case 6: cout << "\nExiting... Thank you!\n"; break;
            default: cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

// Add a project
void addProject() {
    ConstructionProject p;
    p.inputDetails();
    projects.push_back(p);
    cout << "Project added successfully.\n\n";
}

// Display all projects
void displayProjects() {
    if (projects.empty()) {
        cout << "\nNo projects available.\n\n";
        return;
    }

    cout << "\nProject List:\n";
    printHeader();
    for (const auto& proj : projects) {
        proj.displayDetails();
    }
}

// Search for a project
void searchProject() {
    int id;
    bool found = false;
    cout << "Enter Project ID to search: ";
    cin >> id;

    for (const auto& proj : projects) {
        if (proj.getProjectID() == id) {
            printHeader();
            proj.displayDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Project ID " << id << " not found.\n\n";
    }
}

// Update a project
void updateProject() {
    int id;
    bool found = false;
    cout << "Enter Project ID to update: ";
    cin >> id;

    for (auto& proj : projects) {
        if (proj.getProjectID() == id) {
            proj.updateDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Project ID " << id << " not found.\n\n";
    }
}

// Delete a project
void deleteProject() {
    int id;
    bool found = false;
    cout << "Enter Project ID to delete: ";
    cin >> id;

    for (auto it = projects.begin(); it != projects.end(); ++it) {
        if (it->getProjectID() == id) {
            projects.erase(it);
            cout << "Project deleted successfully.\n\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Project ID " << id << " not found.\n\n";
    }
}

// Print table header
void printHeader() {
    cout << left << setw(10) << "Proj ID"
         << setw(25) << "Project Name"
         << setw(20) << "Contractor"
         << setw(11) << "Base Cost"
         << setw(11) << "GST"
         << setw(11) << "Total Cost" << endl;
    cout << string(90, '-') << endl;
}
