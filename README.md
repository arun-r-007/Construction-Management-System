```markdown
# 🏗️ Construction Management System (C++ OOP Project)

A simple **Construction Management System** built using **C++ and Object-Oriented Programming** concepts. This project helps manage construction projects with GST billing, contractor records, and cost summaries — ideal for learning OOP with real-world context.

---

## 🚀 Features

- ➕ Add a new construction project  
- 📋 Display all project records in a table  
- 🔍 Search project by Project ID  
- ✏️ Update project details  
- 🗑️ Delete a project  
- 💰 GST calculation (18%) and total cost computation  
- ✅ Clean, menu-driven CLI interface

---

## 🛠️ Tech Stack

- **Language:** C++  
- **Paradigm:** Object-Oriented Programming (OOP)  
- **Data Structure:** `std::vector`  
- **Compiler:** g++, clang++, MinGW  
- **Platform:** Console (Windows, Linux, macOS)

---

## 📂 Folder Structure

```

Construction-Management-System/
├── construction\_management.cpp   # Main source code
├── README.md                     # Project documentation

````

---

## 🧑‍💻 How to Compile & Run

### On Linux/macOS:
```bash
g++ construction_management.cpp -o cms
./cms
````

### On Windows (MinGW):

```bash
g++ construction_management.cpp -o cms.exe
cms.exe
```

> 💡 Make sure `g++` is installed. On Linux: `sudo apt install g++`
> On Windows: install [MinGW](https://www.mingw-w64.org/)

---

## 📸 Sample Output

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

## 💡 Concepts Demonstrated

* **Encapsulation:** Private data + public methods
* **Abstraction:** Class-based system organization
* **Dynamic Storage:** Use of STL `vector`
* **Formatting:** Neatly aligned table using `iomanip`

---

## 🔮 Future Enhancements

* [ ] Role-based user login (admin/contractor)
* [ ] GUI version using Qt or web frontend

---
