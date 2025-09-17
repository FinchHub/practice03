# Practice Assignment: Module 3 - Functions and File I/O

## Overview
Create a **Simple Bank Account System** that demonstrates Module 3 concepts: functions, function overloading, default arguments, and file I/O for data persistence.

## Instructions
- Create **one simple program** that works with a single bank account
- Use proper C++ coding conventions (std:: prefix, no using namespace std)
- Implement the required functions and features
- Test your program thoroughly with different inputs

## File Naming and Submission

### File Naming
- **Main Program:** `bank_account.cpp`
- **Data File:** `account.txt` (will be created by your program)

### AI Disclaimer Requirement
**CRITICAL:** Your main file must include an AI Disclaimer at the top. The autograder will look for this exact text and check the content after it.

**Examples of AI Disclaimers (choose the most appropriate or write your own):**

**No AI Use:**
```cpp
// AI Disclaimer: This code was written without the use of AI tools.
// Any assistance received was from course materials, textbooks, or instructor guidance only.
```

**Minimal AI Use (e.g., syntax help, debugging):**
```cpp
// AI Disclaimer: This code was written with minimal AI assistance.
// Used AI for: syntax checking and debugging only.
// Core logic and problem-solving approach are my own work.
```

**Moderate AI Use (e.g., code structure, algorithm suggestions):**
```cpp
// AI Disclaimer: This code was written with moderate AI assistance.
// Used AI for: code structure suggestions and algorithm guidance.
// I implemented the solutions and modified the AI suggestions to fit the requirements.
```

**Extensive AI Use (e.g., significant code generation):**
```cpp
// AI Disclaimer: This code was written with extensive AI assistance.
// Used AI for: code generation, debugging, and optimization.
// I reviewed, tested, and modified all AI-generated code to ensure it meets requirements.
```

**Unacceptable AI Use (e.g., "vibe coding" without learning):**
```cpp
// AI Disclaimer: This code was written with extensive AI assistance.
// Used AI for: complete code generation to pass autograder.
// I copied the code without understanding it, just to get a green checkmark.
// I didn't actually learn anything from this assignment.
```

**Your program code starts here...**

### Submission Process
1. Create your program files
2. Commit and push to GitHub
3. Submit your repository URL

**Example repository URL:** `https://github.com/Seward-Classes/practice-03-username`

---

## Simple Bank Account System

### Requirements

Create a simple bank account system that demonstrates Module 3 concepts:

#### Core Features
1. **Single Account System**:
   - Works with one bank account only
   - If `account.txt` doesn't exist, create account with $100 balance
   - If `account.txt` exists, load the balance from file

2. **Menu Options**:
   - Deposit money
   - Withdraw money
   - Check balance
   - Exit program

3. **File I/O**:
   - Save account balance to `account.txt` after each operation
   - Load account balance from file on startup
   - Handle file errors gracefully

#### Required Function Implementations

**1. Function Overloading (Required)**
```cpp
// Overload deposit function - one with description, one without
void deposit(double amount);
void deposit(double amount, std::string description);

// Overload withdraw function - one with description, one without
bool withdraw(double amount);
bool withdraw(double amount, std::string description);
```

**2. Default Arguments (Required)**
```cpp
// Save balance with default filename
void saveBalance(const std::string& filename = "account.txt");

// Load balance with default filename
double loadBalance(const std::string& filename = "account.txt");
```

**3. Additional Required Functions**
```cpp
// Display menu and get user choice
int displayMenu();

// Get current balance
double getBalance();

// Check if withdrawal is valid (sufficient funds)
bool isValidWithdrawal(double amount);
```

### Program Structure

#### Sample Menu Output
```
==========================================
SIMPLE BANK ACCOUNT SYSTEM
==========================================
1. Deposit Money
2. Withdraw Money
3. Check Balance
4. Exit
==========================================
Enter your choice (1-4): 
```

#### Sample Deposit with Overloading
```
Enter amount to deposit: 50.25
Enter description (or press Enter to skip): Birthday gift
Deposit successful!
New balance: $150.25
```

#### Sample Withdrawal
```
Enter amount to withdraw: 25.00
Enter description (or press Enter to skip): 
Withdrawal successful!
New balance: $125.25
```

#### Sample Balance Check
```
Current balance: $125.25
```

### Data File Format

The `account.txt` file should store only the balance:
```
125.25
```

### Error Handling Requirements

Your program must handle these error conditions:
1. **Invalid menu choices** - Display error message and show menu again
2. **Insufficient funds** - Display "Insufficient funds" message for withdrawals
3. **Invalid amounts** - Display error for negative or zero amounts
4. **File errors** - Display appropriate error messages for file operations
5. **Invalid input** - Handle non-numeric input gracefully

### Testing Requirements

Test your program with these scenarios:
1. **First run** (no account.txt file) - Should start with $100 balance
2. **Subsequent runs** - Should load balance from account.txt file
3. **Perform deposits** with and without descriptions
4. **Perform withdrawals** with and without descriptions
5. **Check balance** after operations
6. **Test insufficient funds** - Try to withdraw more than available
7. **Test invalid amounts** - Try negative or zero amounts
8. **Restart program** to verify balance persists

### Sample Program Flow

```
1. Program starts → Load balance from account.txt (or start with $100 if file doesn't exist)
2. Display menu → User selects option
3. Execute chosen operation → Update balance
4. Save balance to account.txt
5. Return to menu (unless exit chosen)
```

---

## Submission Checklist

- [ ] Created `bank_account.cpp` with all required features
- [ ] Implemented function overloading for deposit/withdraw operations (with/without description)
- [ ] Used default arguments for filename in save/load functions
- [ ] Implemented file I/O for data persistence (account.txt)
- [ ] Created simple menu (Deposit, Withdraw, Check Balance, Exit)
- [ ] Starts with $100 balance if account.txt doesn't exist
- [ ] Included proper AI disclaimer at top of file
- [ ] Handles all error conditions appropriately
- [ ] Code uses proper C++ conventions (std:: prefix)
- [ ] Program compiles and runs without errors
- [ ] All files are committed and pushed to GitHub
- [ ] Repository URL is submitted on BlackBoard
