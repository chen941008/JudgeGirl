#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct employee {
  int id;
  char first_name[32];
  char last_name[32];
  int boss_id;
}Employee;
// This function takes an employee's ID and the array of all employees
// and returns the ID of the topmost boss of the employee.
// If the employee is their own boss, their ID is returned.
// Otherwise, the function calls itself with the boss's ID.
int find_top_boss(int boss_id, Employee *employeeArray, int n) {
    // Iterate through all employees until we find the one with the given ID.
    for (int i = 0; i < n; i++) {
        if (employeeArray[i].id == boss_id) {
            // If the employee is their own boss, return their ID.
            if (employeeArray[i].id == employeeArray[i].boss_id) {
                return employeeArray[i].id;
            }
            // Otherwise, call this function again with the boss's ID.
            // This is the recursive step.
            return find_top_boss(employeeArray[i].boss_id, employeeArray, n);
        }
    }
    // If no employee with the given ID is found, return -1.
    return -1;
}
// This function takes an employee's ID, another employee's ID, and the array of all employees,
// and returns true if the first employee is a subordinate of the second employee,
// and false otherwise.
bool is_subordinate(int id_a, int id_b, Employee *employeeArray, int n) {
    // If the two employees are the same, return false.
    if (id_a == id_b) {
        return false;
    }

    // Iterate through all employees until we find the one with the given ID.
    for (int i = 0; i < n; i++) {
        if (employeeArray[i].id == id_a) {
            // If the employee is their own boss, return false.
            if (employeeArray[i].boss_id == employeeArray[i].id) {
                return false;
            }

            // If the employee's boss is the second employee, return true.
            if (employeeArray[i].boss_id == id_b) {
                return true;
            }

            // Otherwise, call this function again with the boss's ID.
            // This is the recursive step.
            return is_subordinate(employeeArray[i].boss_id, id_b, employeeArray, n);
        }
    }

    // If no employee with the given ID is found, return false.
    return false;
}
// This function takes four strings (first and last names of two employees)
// and the array of all employees, and prints out the relationship between
// the two employees. The possible relationships are:
// - subordinate: the first employee is a subordinate of the second employee
// - supervisor: the first employee is a supervisor of the second employee
// - colleague: the two employees are colleagues (i.e. they have the same boss)
// - unrelated: the two employees are unrelated (i.e. they do not have the same boss,
//             and neither is a subordinate of the other).
void find_relationship(char a_first_name[32],char a_last_name[32],char b_first_name[32],char b_last_name[32],Employee *employeeArray,int n){
    int id_a=0,id_b=0;
    // Iterate through all employees until we find the IDs of the two given employees.
    for(int i=0;i<n;i++){
        // If we find the first employee, save their ID.
        if(strcmp(employeeArray[i].first_name, a_first_name) == 0 && strcmp(employeeArray[i].last_name, a_last_name) == 0) {
            id_a = employeeArray[i].id;
        }
        // If we find the second employee, save their ID.
        if(strcmp(employeeArray[i].first_name, b_first_name) == 0 && strcmp(employeeArray[i].last_name, b_last_name) == 0) {
            id_b = employeeArray[i].id;
        }
    }
    // Check if the first employee is a subordinate of the second employee.
    if(is_subordinate(id_a,id_b,employeeArray,n)){
        printf("subordinate\n");
    }
    // Check if the second employee is a subordinate of the first employee.
    else if(is_subordinate(id_b,id_a,employeeArray,n)){
        printf("supervisor\n");
    }
    // Check if the two employees have the same boss.
    else if(find_top_boss(id_a,employeeArray,n)==find_top_boss(id_b,employeeArray,n)){
        printf("colleague\n");
    }
    // If none of the above conditions are true, the two employees are unrelated.
    else{
        printf("unrelated\n");
    }
}
int main() {
    int n;  // Number of employees
    // Read the number of employees
    scanf("%d", &n);
    
    // Allocate memory for 'n' employees
    Employee *employeeArray = malloc(n * sizeof(Employee));
    
    // Read each employee's details
    for (int i = 0; i < n; i++) {
        // Read employee id, first name, last name, and boss id
        scanf("%d%s%s%d", &employeeArray[i].id, employeeArray[i].first_name, employeeArray[i].last_name, &employeeArray[i].boss_id);
    }

    int m;  // Number of queries to process
    // Read the number of relationship queries
    scanf("%d", &m);

    // Process each query
    for (int i = 0; i < m; i++) {
        // Declare and initialize variables to store the names of the two employees
        char a_first_name[32] = {0}, b_first_name[32] = {0};
        char a_last_name[32] = {0}, b_last_name[32] = {0};

        // Read the first and last names of the two employees involved in the query
        scanf("%s%s%s%s", a_first_name, a_last_name, b_first_name, b_last_name);

        // Determine and print the relationship between the two employees
        find_relationship(a_first_name, a_last_name, b_first_name, b_last_name, employeeArray, n);
    }

    // Free the allocated memory for employees
    free(employeeArray);
}
