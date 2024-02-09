#include <stdio.h>
#include <stdlib.h>

// Define the structure for the Animal
struct Animal {
    char name[50];
    int age;
    char species[50];
};

// Function to take inputs for an animal from the user
void getAnimalInput(struct Animal *animal) {
    printf("Enter the name of the animal: ");
    scanf("%s", animal->name);

    printf("Enter the age of the animal: ");
    scanf("%d", &animal->age);

    printf("Enter the species of the animal: ");
    scanf("%s", animal->species);
}

// Function to display information about an animal
void displayAnimal(struct Animal *animal) {
    printf("Name: %s\n", animal->name);
    printf("Age: %d\n", animal->age);
    printf("Species: %s\n", animal->species);
}

int main() {
    // Create an instance of the Animal struct
    struct Animal myAnimal;

    // Take inputs from the user
    getAnimalInput(&myAnimal);

    // Display information about the animal
    printf("\nAnimal Details:\n");
    displayAnimal(&myAnimal);

    return 0;
}
