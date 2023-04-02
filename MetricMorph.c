#include <stdio.h>

int main() {
    int option;
    float input, output;

    printf("Unit Converter Menu:\n");
    printf("1. Temperature\n");
    printf("2. Volume\n");
    printf("3. Weight\n");
    printf("4. Length\n");
    printf("5. Currency\n");
    printf("6. Area Code\n");
    printf("Enter your option (1-6): ");
    scanf("%d", &option);

    switch(option) {
        case 1: // Temperature
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &input);
            output = (input * 1.8) + 32;
            printf("The temperature in Fahrenheit is: %.2f\n", output);
            break;

        case 2: // Volume
            printf("Enter the volume in liters: ");
            scanf("%f", &input);
            output = input * 1000;
            printf("The volume in milliliters is: %.2f\n", output);
            break;

        case 3: // Weight
            printf("Enter the weight in kilograms: ");
            scanf("%f", &input);
            output = input * 1000;
            printf("The weight in grams is: %.2f\n", output);
            break;

        case 4: // Length
            printf("Enter the length in meters: ");
            scanf("%f", &input);
            output = input * 100;
            printf("The length in centimeters is: %.2f\n", output);
            break;

        case 5: // Currency
            printf("Enter the amount in Kenyan Shillings: ");
            scanf("%f", &input);
            output = input / 135;
            printf("The amount in US Dollars is: %.2f\n", output);
            break;

        case 6: // Area Code
            printf("Enter the area code in square kilometers: ");
            scanf("%f", &input);
            output = input * 1000000;
            printf("The area code in square meters is: %.2f\n", output);
            break;

        default:
            printf("Invalid option. Please select an option between 1 and 6.\n");
            break;
    }

    return 0;
}
