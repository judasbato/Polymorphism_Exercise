# Polymorphism Exercise

## Overview

This C++ project demonstrates runtime polymorphism and interface usage through a simple banking system. It covers:

- Abstract base class (`Account`) with pure virtual functions for deposit, withdraw, and printing  
- Interface class (`I_Printable`) and overloading of `operator<<`  
- Derived account types:  
  - `Checking_Account` (withdrawal fee per transaction)  
  - `Savings_Account` (interest on deposits)  
  - `Trust_Account` (bonus on large deposits and limited withdrawals)  
- Utility functions (`display`, `deposit`, `withdraw`) operating on collections of `Account` pointers  
- Modern C++ features (C++17, smart pointers, `std::vector`)

## Prerequisites

- C++17 compatible compiler (e.g., GCC, Clang, MSVC)  
- CMake (version 3.26 or higher)  
- Git

## Building the Project

1. **Clone the repository**
   ```bash
   git clone https://github.com/judasbato/Polymorphism_Exercise.git
   cd Polymorphism_Exercise
2. **Create a build directory and run CMake**
   ```bash
   mkdir build && cd build
   cmake ..
3. **Compile**
   ```bash
   cmake --build .

## Running the Application

From the `build` directory:
  ```bash
  ./Polymorphism_Exercise
```
## Project Structure

  ```bash
  Polymorphism_Exercise/
├── CMakeLists.txt         # Build configuration
├── main.cpp               # Entry point demonstrating polymorphism
├── Account.h/.cpp         # Abstract base class
├── I_Printable.h/.cpp     # Interface for printing
├── Checking_Account.h/.cpp
├── Savings_Account.h/.cpp
├── Trust_Account.h/.cpp
└── Account_Util.h/.cpp    # Utility functions for batch operations
```

## Usage & Expected Output

The program creates instances of different account types, performs deposits and withdrawals via pointers, and prints results.
  ```yaml
[Checking_Account: Battal: 5000.00]
[Trust Account: Fevzi: 0.00, 0.00%, withdrawals: 0]

=== Accounts ===========================================
[Checking_Account: Yigit: 10000.00]
[Savings_Account: Murat: 1000.00, 0]
[Trust Account: Enis: 0.00, 0.00%, withdrawals: 0]

=== Depositing to Accounts ==============================
Deposited 1000 to [Checking_Account: Yigit: 11000.00]
Deposited 1000 to [Savings_Account: Murat: 1000.00, 0]
Deposited 1000 to [Trust Account: Enis: 1050.00, 0.00%, withdrawals: 0]

=== Withdrawing from Accounts ==========================
Withdrew 2000 from [Checking_Account: Yigit: 10998.50]
Withdrew 2000 from [Savings_Account: Murat: 0.00, 0]
Withdrew 2000 from [Trust Account: Enis: 0.00, 0.00%, withdrawals: 1]
```

