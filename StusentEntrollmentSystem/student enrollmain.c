// C program that demonstrates the  
// implementation of   
// Student Record System  
  
// import all the required  
// packages and libraries  
#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
// initiate the value of i  
// to have an iteration   
// and keep track of   
// the number of students  
  
int i = 0;  
  
// initiate a structure  
// in order to store the   
// information of student  
  
struct student_info  
{  
    char f_name[50];  
    char l_name[50];  
    int r_no;  
    float cgpa;  
    int cid[10];  
}st[55];  
  
// method declared  
// in order to add  
// a new student  
void add_student()  
{  
    printf("You can add the Student data now !! \n");  
  
    // entering the first name of the student  
    printf("Enter the first name of the Student: ");  
    // scan the first name of the student by using the scanf statement   
    scanf("%s", st[i].f_name);  
    // entering the last name of the student  
    printf("Enter the last name of the Student: ");  
    // scan the last name of the student by using the scanf statement  
    scanf("%s", st[i].l_name);  
  
    // entering the roll number of the student  
    printf("Enter the roll number of the Student: ");  
    // scan the roll number of the student by using the scanf statement  
    scanf("%d", &st[i].r_no);  
  
    // entering the CGPA of the student  
    printf("Enter the CGPA that the student achieved: ");  
    // scan the CGPA of the student by using the scanf statement  
    scanf("%f", &st[i].cgpa);  
  
    // entering the course id of each course to register  
    printf("List of courses with their respective course ids: ");  
      
    // iteration used for storing   
    // the enrolled courses of every student  
    for(int j = 0; j<5; j++)  
    {  
        // storing the j value   
        // in the corresponding  
        // course number  
        scanf("%d", &st[i].cid[j]);  
    }  
    // increasing the value number of students   
    // by 1 after every iteration  
    // as the details of the new student are entered  
    i = i+1;  
  
}  
  
// method declared  
// in order to   
// find the details of   
// the existing student  
// using a roll number  
void find_using_roll()  
{  
    int roll;  
    printf("You can find the Student data ");  
    printf("by entering a roll number now !! \n");  
  
    // scanning the roll number of the student  
    printf("Enter the roll number of the Student: ");  
    // scan the roll number of the student by using the scanf statement  
    scanf("%d", &roll);  
    // in order to find the details  
    // we are iterating through all the details   
    // of the students present within the data  
    // using a for loop  
    for (int j = 1; j <= i; j++)   
    {  
   
        // If the condition denotes the situation   
        // where the roll number is found  
        if (roll == st[i].r_no)   
        {  
            printf("The details of the Student ");  
            printf("with the roll given number are\n");  
  
            // printing the first name of the student  
            printf("The First name of the student is %s\n", st[j].f_name);  
            printf("The Last name of the student is %s\n", st[j].l_name);  
            printf("The CGPA of the student is %f\n", st[j].cgpa);  
              
            // Printing the list of names of the courses  
            // which are enrolled by the student  
  
            // iteration used for displaying   
            // all the 3 courses   
            // that are enrolled by the student  
            // using a " for " loop  
        }  
        for (int j = 0; j < 5; j++)   
        {  
            printf("The course ID is %d\n", st[i].cid[j]);  
        }  
        break;  
    }  
}  
  
// method that is declared   
// to scan the first name of a student  
// and print all the details   
// of the respective student bearing the first name  
  
// use the method find_using_fname()   
void find_using_fname()  
{  
    char name[50];  
    printf("You can find the Student data ");  
    printf("by entering the first name now !! \n");  
  
    // scanning the first name of the student  
    printf("Enter the first name of the Student: ");  
    // scan the first name of the student by using the scanf statement  
    scanf("%s", name);  
    // (But I've directly entered the first name  
    // in order to have a glance )  
   
    // to find the details of the student,  
    // we are iterating through all the details   
    // of the students present within the data  
  
    // using a for loop  
    for (int j = 0; j <= i; j++) {  
   
        // If the condition denotes the situation   
        // where the first name is being searched is found  
  
      // the strcmp() compares the given two strings  
        // by comparing each character one by one  
        // and if the strings are the same  
        // then the function returns 0  
  
        if (!strcmp(st[j].f_name, name))   
        {  
   
            printf("The details of the student are displayed below\n");  
            printf("The First name of the student is %s\n", st[j].f_name);  
            printf("The Last name of the student is %s\n", st[j].l_name);  
            printf("The Roll Number of the student is %d\n ", st[j].r_no);  
            printf("The CGPA of the student is %f\n", st[j].cgpa);  
              
            // Printing the list of names of the courses  
            // which are enrolled by the student  
  
            // iteration used for displaying   
            // all the 3 courses   
            // that are enrolled by the student  
            for (int k = 0; k < 5; k++)   
            {  
                printf("The course ID is %d\n", st[j].cid[k]);  
            }  
             
        }  
          
    }  
}  
  
// method that is declared   
// to scan the course id  
// and print all the details   
// of the students who have enrolled   
// that particular course  
  
void find_using_course()  
{  
    int id;  
    printf("You can find the Student data ");  
    printf("who have enrolled in the course. ");  
    printf("Enter the course ID of the desired course: \n");  
   
    // scanning the course id  
    // scan the course id of by using the scanf statement  
    scanf("%d",&id);  
  
    // in order to find the details,  
    // we are iterating through all the details   
    // of the students present within the data  
    // with the given course id  
  
    // using a for loop  
    // and the iteration continuous   
    // until the iteration variable  
    // is less than or equal to   
    // the maximum number of students  
    // registered in that course  
    for (int j = 0; j <= i; j++)   
    {  
   
        // iteration being processed  
        // in order to get the list of students  
        // who have registered for the   
        // given course id  
        for (int d = 0; d < 5; d++)   
        {  
            // checking the condition  
            // for a match  
            // with the given course id  
            if (id == st[j].cid[d])   
            {  
   
                printf("The details of the Students ");  
                printf("who have registered with the ");  
                printf("corresponding course id: \n");  
                printf("The first name of the student is %s\n", st[j].f_name);  
                printf("The last name of the student is %s\n", st[j].l_name);  
                printf("The Roll number of the student is %d\n", st[j].r_no);  
                printf("The CGPA of the student is %f\n", st[j].cgpa);  
                break;  
            }  
        }  
    }  
}      
  
// method that is declared   
// to delete the student data  
// by scanning the roll number  
// of the student whose data   
// is supposed to be deleted  
void delete()  
{  
    int roll;  
    printf("Enter the roll number of the student ");  
    printf("that you want to delete: ");  
    // scanning the roll number  
    // scan the roll number by using the scanf statement  
    scanf("%d", &roll);  
  
    // iteration being performed throughout the data  
    // to find the student bearing the   
    // roll number, which is given as an input  
    // using a for loop  
    for(int j =0; j<= i; j++)  
    {  
        // checking the condition  
        // for a match  
        // with the given roll number  
        if(roll == st[j].r_no)  
        {  
            for(int k = j; k < 49; k++)  
            {  
                st[k] = st[k + 1];  
            }  
            i--;  
        }  
    }  
  
    printf("The details of the student ");  
    printf("bearing the given roll number are successfully ");  
    printf("removed");  
  
}  
  
// method that is declared   
// to update the student data  
// by scanning the roll number  
// of the student whose data   
// is supposed to be updated  
  
void update()  
{  
   
    int roll;  
    printf("Enter the roll number of the student ");  
    printf("that you want to update: ");  
      
    // scanning the roll number  
      
    // scan the roll number of the student   
    // by using the scanf statement  
    scanf("%d\n", &roll);  
  
    // iteration being performed throughout the data  
    // to find the student bearing the   
    // roll number, which is given as an input  
      
    // using a for loop  
    for (int j = 1; j <= i; j++)   
    {  
        // checking the condition  
        // for a match  
        // with the given roll number  
        if (st[j].r_no == roll)   
        {  
            printf("Enter the number ");  
            printf("for which details you want to update: \n");  
            printf("1. First name of the student\n");  
            printf("2. Last name of the student\n");  
            printf("3. Roll number of the student\n");  
            printf("4. CGPA of the student\n");  
            printf("5. Courses registered by the student\n");  
            int z;  
   
            // scan the number by using the scanf statement  
            scanf("%d", &z);  
            switch (z)   
            {  
            case 1:  
                printf("Enter the first name ");  
                printf("that you want to update : \n");  
                scanf("%s", st[j].f_name);  
                break;  
            case 2:  
                printf("Enter the last name ");  
                printf("that you want to update : \n");  
                scanf("%s", st[j].l_name);  
                  
                break;  
            case 3:  
                printf("Enter the first name ");  
                printf("that you want to update : \n");  
                scanf("%d", &st[j].r_no);  
                break;  
            case 4:  
                printf("Enter the new CGPA : \n");  
                // scan the cgpa by using the scanf statement  
                scanf("%f", &st[j].cgpa);  
                // (I've directly entered the cgpa  
                // to have a glance )  
  
                break;  
            case 5:  
                printf("Enter the new courses \n");  
                scanf("%d%d%d%d%d", &st[j].cid[0], &st[j].cid[1], &st[j].cid[2], &st[j].cid[3], &st[j].cid[4]);  
                break;  
            }  
            printf("The Details of the Student ");   
            printf("are updated successfully !!\n");  
        }  
    }  
}  
  
// method that is declared   
// to print the total number   
// of students   
  
void count()  
{  
    // initially, i is taken as  
    // the total number of students  
    // and the value of i is always   
    // incremented whenever a student  
    // is added  
    // value of i is  
    // equal to the value of total  
    // number of students  
  
    // printing the value of i  
    printf("The total number");  
    printf(" of Students is: %d\n",i);  
  
    printf("\nThe maximum number ");  
    printf("of students is 50\n");  
  
    // as the maximum number of students is 50  
    // the leftover number is calculated  
    // by subtracting the value of i from 50  
  
    printf("%d more students can be added\n",50-i);  
      
}  
  
// initiating the main section  
void main()  
{  
    int choice;  
    while (i = 1)  
    {  
        // giving the possible statements   
        printf("\n\n\n1. Add the details of the student\n");  
        printf("2. Find the details of the");  
        printf(" student by using roll number\n");  
        printf("3. Find the details of the");  
        printf(" student by using first name\n");  
        printf("4. Find the details of the");  
        printf(" student by using course id\n");  
        printf("5. Update the details of the");  
        printf(" student by using roll number\n");  
        printf("6. Delete the details of the");  
        printf(" student by using roll number\n");  
        printf("7. Find the total number ");  
        printf("of students\n");  
        printf("8. Exit\n");  
          
        printf("Enter the choice number");  
        printf(" that you want to perform: ");  
        scanf("%d", &choice);  
                    
        // use switch cases to  
        // access the method  
        switch (choice)  
        {  
            // to add student  
            case 1:  
                add_student();  
                break;  
  
            // to find student  
            // using roll number  
            case 2:  
                find_using_roll();  
                break;  
  
            // to find student   
            // using the first name  
            case 3:  
                find_using_fname();  
                break;  
              
            // to find student  
            // using course id  
            case 4:  
                find_using_course();  
                break;  
              
            // to update details  
            // using roll number  
            case 5:  
                update();  
                break;  
              
            // to delete details  
            // using roll number  
            case 6:  
                delete();  
                break;  
              
            // to count the total  
            // number of students  
            case 7:  
                count();  
                break;  
              
            // to exit  
            case 8:  
                printf("Exit successful!!");  
                exit(0);  
                break;  
              
        }  
  
    }  
}  