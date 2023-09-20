#include<iostream>
using namespace std;
typedef struct employee {

    char* name;

    int id;

} emp;

int main() {

    emp e[3];

    printf("\n\n----------Enter 3 Employee Details----------\n\n");

    for (int i = 0; i < 3; i++) {

        printf("\nEnter employee %d name: ", i + 1);

        e[i].name = (char *)malloc(sizeof(char) * 100);  // Allocate memory for the name

        scanf(" %[^\n]", e[i].name);

        printf("\nEnter employee %d id: ", i + 1);

        scanf("%d", &e[i].id);

    }

    printf("\n\n----------Displaying Employee details----------\n\n");

    for (int i = 0; i < 3; i++) {

        printf("\nEmployee name: %s", e[i].name);

        printf("\nEmployee id: %d\n", e[i].id);

        free(e[i].name);  // Free the allocated memory

    }

    return 0;
}
