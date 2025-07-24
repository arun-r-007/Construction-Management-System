# ConstruxPlus – Construction Management System (C++ Project)

**ConstruxPlus** is a command-line Construction Management System developed in **C++**, demonstrating core Object-Oriented Programming principles such as **encapsulation** and **abstraction**. The project allows users to manage construction records, calculate GST, and maintain contractor details—ideal for students and beginners exploring real-world software design in C++.

---

## Features

* Add a new construction project
* Display all project records with financial summaries
* Search for a project using Project ID
* Update existing project details
* Delete project records
* Automatic GST (18%) billing and total cost calculation
* Menu-driven user interface for streamlined interaction

---

## Technologies Used

* **Programming Language:** C++
* **Compilers Supported:** g++, MinGW, clang++
* **Platform:** Console-based (compatible with Windows, Linux, macOS)

---

## File Structure

```
Construction-Management-System/
├── construction_management.cpp     → Main source code
├── README.md                       → Project documentation
```

---

## How to Compile and Run

### On Linux/macOS

```bash
g++ construction_management.cpp -o cms
./cms
```

### On Windows (MinGW)

```bash
g++ construction_management.cpp -o cms.exe
cms.exe
```

**Note:** Ensure a compatible C++ compiler is installed.

* On Linux: Install via `sudo apt install g++`
* On Windows: Install MinGW from [https://www.mingw-w64.org](https://www.mingw-w64.org)

---

## Sample Output

```
================ CONSTRUCTION MANAGEMENT SYSTEM ================
1. Add Project
2. Display All Projects
3. Search Project by ID
4. Update Project
5. Delete Project
6. Exit
================================================================
Enter your choice: 1

Enter Project ID: 1001
Enter Project Name: Green Valley Villas
Enter Contractor Name: S.K. Builders
Enter Base Cost (₹): 1200000
Project added successfully.
```


---

## Demo Website

[live Website](https://arun-r-007.github.io/ConstruxPlus/)

---

## Website Screenshot

![website Screenshot](https://github.com/user-attachments/assets/117730bc-eda4-401c-88f6-79c0b1efab54)

---

## Output Screenshot

![Demo Image](https://github.com/user-attachments/assets/c73e9e97-ce9d-4f02-931e-abd45ede12a1)

---


## Potential Enhancements

* Implement role-based access control (e.g., Admin vs Contractor)
* Integrate a graphical user interface using frameworks such as Qt or JavaFX
* Provide analytics features, such as total revenue, average cost, and historical reports
