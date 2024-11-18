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
int find_top_boss(int boss_id,Employee *employeeArray,int n){
    for(int i=0;i<n;i++){
        if(employeeArray[i].id==boss_id){
            if(employeeArray[i].id==employeeArray[i].boss_id){
                return employeeArray[i].id;
            }
            return find_top_boss(employeeArray[i].boss_id,employeeArray,n);
        }
    }
    return -1;
}
bool is_subordinate(int id_a,int id_b,Employee *employeeArray,int n){//a is b subordinate?
    if(id_a==id_b)return false;
    for(int i=0;i<n;i++){
        if(employeeArray[i].id==id_a){
            if(employeeArray[i].boss_id==employeeArray[i].id){
                return false;
            }
            if(employeeArray[i].boss_id==id_b){
                return true;
            }
            return is_subordinate(employeeArray[i].boss_id,id_b,employeeArray,n);
        }
    }
    return false;
}
void find_relationship(char a_first_name[32],char a_last_name[32],char b_first_name[32],char b_last_name[32],Employee *employeeArray,int n){
    int id_a=0,id_b=0;
    for(int i=0;i<n;i++){
        if(strcmp(employeeArray[i].first_name, a_first_name) == 0 && strcmp(employeeArray[i].last_name, a_last_name) == 0) {
            id_a = employeeArray[i].id;
        }
        if(strcmp(employeeArray[i].first_name, b_first_name) == 0 && strcmp(employeeArray[i].last_name, b_last_name) == 0) {
            id_b = employeeArray[i].id;
        }
    }
    if(is_subordinate(id_a,id_b,employeeArray,n)){
        printf("subordinate\n");
    }
    else if(is_subordinate(id_b,id_a,employeeArray,n)){
        printf("supervisor\n");
    }
    else if(find_top_boss(id_a,employeeArray,n)==find_top_boss(id_b,employeeArray,n)){
        printf("colleague\n");
    }
    else{
        printf("unrelated\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Employee *employeeArray=(Employee*)malloc(n*sizeof(Employee));
    for(int i=0;i<n;i++){
        scanf("%d%s%s%d",&employeeArray[i].id,employeeArray[i].first_name,employeeArray[i].last_name,&employeeArray[i].boss_id);
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        char a_first_name[32]={0},b_first_name[32]={0},a_last_name[32]={0},b_last_name[32]={0};
        scanf("%s%s%s%s",a_first_name,a_last_name,b_first_name,b_last_name);
        find_relationship(a_first_name,a_last_name,b_first_name,b_last_name,employeeArray,n);
    }
    free(employeeArray);
}