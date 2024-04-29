#include<stdio.h>


struct Student
{
    char name;
    int roll;

};

int num;
struct Student std1;

num =  2;
std1.roll=1111;
strcpy(std1.name,"Pappu");



/////////////////////////


/*struct Student
{ 
    int roll;
    char name;

};

struct Student std = {1107,"Chintu"};
struct Student *ptr = &std;

std.roll = 101;
strcpy(std.name, "James");
ptr -> roll = 102;
strcpy(ptr->name,"IIT");


////////////////////

original name and direct access
//original 

std.roll;

//remote access

//direct
ptr -> roll = 102;/*

//currnt memory 

//stack memory and heap memory


// 1.Stack memory is controlled and managed by control system
// 2.whereas heap memory is controlled and mangaed by programmer
//stack memory may have named loctaion whereas heap memory cannot have named location



