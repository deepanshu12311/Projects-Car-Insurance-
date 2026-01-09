#include <stdio.h>
#include <string.h>

int main()
{
    int age, is_Indian, accident_record_for_last_3_years;
    float car_value, premium = 0;
    int excess = 0;
    char policy_type[20] = "None";
    char record_good;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Citizen (If indian enter 1 or else enter 0): ");
    scanf("%d", &is_Indian);
    printf("Enter number of accident in past 3 years: ");
    scanf("%d", &accident_record_for_last_3_years);
    printf("Enter value of car: ");
    scanf("%f", &car_value);

    int is_record_good = (accident_record_for_last_3_years == 0);

    if (age >= 25)
    {
        if (is_Indian)
        {
            if (is_record_good)
            {
                strcpy(policy_type, "Comprehensive");
                premium = 0.06 * car_value;
                excess = 0;
            }
            else
            {
                strcpy(policy_type, "Comprehensive");
                premium = 0.07 * car_value;
                excess = 100;
            }
        }
        else
        {
            if (is_record_good)
            {
                strcpy(policy_type, "Comprehensive");
                premium = 0.06 * car_value;
                excess = 100;
            }
            else
            {
                strcpy(policy_type, "Third Party");
                premium = 0.07 * car_value;
                excess = 0;
            }
        }
    }
    else
    {
        if (is_Indian)
        {
            if (is_record_good)
            {
                strcpy(policy_type, "Comprehensive");
                premium = 0.06 * car_value;
                excess = 100;
            }
        }
        else
        {
            if (is_record_good)
            {
                strcpy(policy_type, "Comprehensive");
                premium = 0.08 * car_value;
                excess = 100;
            }
            else
            {
                strcpy(policy_type,"No policy Available");
            }
        }
    }
    printf("\n---Insurance Quotation---\n");
    if (strcmp(policy_type, "No policy Available") == 0 || strcmp(policy_type, "None") == 0)
        printf("Result: No policy can be taken out due to high risk.\n");
    else
    {
        printf("A. Policy Type: %s\n", policy_type);
        printf("B. Premium Amount: %.2f\n", premium);
        printf("C. Excess Amount: %d\n", excess);
    }
    return 0;
}