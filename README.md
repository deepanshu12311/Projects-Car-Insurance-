# 🚗 Motor Insurance Policy Calculator

A specialized C-based decision engine designed for insurance providers to automate the determination of policy types, premium rates, and claim excesses.

---

## 📖 Overview
This program implements a complex set of business rules to categorize risk and provide accurate insurance quotes. It evaluates the driver's age, the car's country of manufacture, and the historical accident record to output a finalized insurance package.

## 🛠️ Key Features
* **Dynamic Premium Calculation:** Automatically calculates premiums as a percentage ($6\%-8\%$) of the car's declared value.
* **Risk Assessment:** Identifies high-risk cases where no policy can be issued.
* **Automated Logic:** * **Good Record:** Defined as 0 accidents in the last 3 years.
    * **Excess Application:** Determines if the policyholder must pay the first ₹100 of a claim.

---

## 📋 Insurance Rule Matrix

| Age | Origin | Record | Policy Type | Premium | Excess |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **25+** | India | Good | Comprehensive | 6% | ₹0 |
| **25+** | India | Bad | Comprehensive | 7% | ₹100 |
| **25+** | Foreign | Good | Comprehensive | 6% | ₹100 |
| **25+** | Foreign | Bad | Third Party | 7% | ₹0 |
| **< 25** | India | Good | Comprehensive | 6% | ₹100 |
| **< 25** | Foreign | Good | Comprehensive | 8% | ₹100 |
| **< 25** | Foreign | Bad | **DECLINED** | N/A | N/A |

---

## 🚀 Getting Started

### Prerequisites
* Any standard C compiler (GCC, Clang, MinGW).

### Compilation
Use the following command to compile the program:
```bash
gcc motor_insurance.c -o insurance_calc
