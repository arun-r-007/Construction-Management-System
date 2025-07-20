# 🏗️ Construction Management System (C++ Project)

A simple Construction Management System written in **C++**, applying core Object-Oriented Programming concepts like **encapsulation** and **abstraction**. This project helps manage construction project records, GST billing, and contractor details — perfect for beginners learning C++ with real-world application.

---

## 🚀 Features

* **➕ Add** a new construction project
* **📋 Display** all projects with financial summary
* **🔍 Search** project by Project ID
* **✏️ Update** project details
* **🗑️ Delete** project record
* **💰 GST (18%)** billing and total cost calculation
* **✅ Clean and user-friendly** menu-driven interface

---

## 🛠️ Technologies Used

* **Language:** C++
* **Compiler:** g++ / MinGW / clang++
* **Platform:** Console-based (cross-platform: Windows, Linux, macOS)

---

## 📂 File Structure

```
Construction-Management-System/
├── construction_management.cpp     → Main source code
├── README.md                       → Project documentation
```

---

## 👨‍💻 How to Compile & Run

### On Linux/macOS:

```bash
g++ construction_management.cpp -o cms
./cms
```

### On Windows (MinGW):

```bash
g++ construction_management.cpp -o cms.exe
cms.exe
```

💡 *Make sure g++ is installed.*

* On Linux: `sudo apt install g++`
* On Windows: Install MinGW from [https://www.mingw-w64.org](https://www.mingw-w64.org)

---

## 🖥️ Sample Output

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
✅ Project added successfully.
```

---

## 💡 Future Improvements

* 🔐 Add role-based login (Admin vs Contractor)
* 🖼️ Create a GUI (Qt, React, or JavaFX)
* 📈 Add project analytics (total revenue, average cost, etc.)
