age = int(input("Enter age of driver: "))
is_Indian = int(input("Citizen (If indian enter 1 else enter 0): "))
accident_in_last_3_years = int(input("Enter number of accident in past 3 years: "))
car_value = int(input("Enter car value: "))

is_good = (accident_in_last_3_years==0)
if age>=25:
    if is_Indian:
        if is_good:
            policy_type = "Comprehensive"
            premium = 0.06*car_value
            excess = 0
        else:
            policy_type = "Comprehensive"
            premium = 0.07*car_value
            excess = 100
    else:
        if is_good:
            policy_type = "Comprehensive"
            premium = 0.06*car_value
            excess = 100
        else:
            policy_type = "Third Party"
            premium = 0.07*car_value
            excess = 0
else:
    if not is_Indian:
        if is_good:
            policy_type = "Comprehensive"
            premium = 0.08*car_value
            excess = 100
        else:
            policy_type = "No Policy Can Be Taken Out"

str = "Insurance Quotation"
print(str.center(30,"-"))
if policy_type == "No Policy Can Be Taken Out":
    print("Considering the risk, no policy can be taken out...")
else:
    print("A. Policy Type:",policy_type)
    print("B. Premium Amount:",premium)
    print("C. Excess Amount:",excess)
end_str = "END"
print(end_str.center(30,"-"))
