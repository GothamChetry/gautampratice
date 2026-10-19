#include<stdio.h>
#include<ctype.h>

int main()
{
    //Declaring variables
    char answer;
    int n,total=0,highest,lowest,pass=0,fail=0;
    float average;

    //printing the header
    printf("****Student Marks Manager****\n\n");

    //Reading number of marks as inputs from the user
    printf("Enter number of students: ");
    scanf("%d",&n);
    if(n<=0) {
        printf("Invalid, Enter valid Number:)\n");
        return 1;
    }
    printf("\n");

    //Reading all marks as inputs from the user
    int studentMarks[n];
    printf("Enter the marks of the students: ");
    for (int i=0; i<n; i++) {
        scanf("%d",&studentMarks[i]);
    }



    highest=studentMarks[0];
    lowest=studentMarks[0];
    for (int i=0; i<n; i++) {
        //Calculating total
        total+=studentMarks[i];
        if(studentMarks[i]<30) {
            fail++;
        } else {
            pass++;

        }
        //Counting Highest and Lowest
        if (studentMarks[i]>highest) {
            highest=studentMarks[i];
        }
        if (studentMarks[i]<lowest) {
            lowest=studentMarks[i];
        }
    }
    do {
        printf("\nEnter (T) for Total \n");
        printf("Enter (A) for Average \n");
        printf("Enter (H) for Highest \n");
        printf("Enter (L) for Lowest \n");
        printf("Enter (C) for Pass or Fail count\n");
        printf("\nEnter T/A/H/L/C: ");
        scanf(" %c",&answer);
        switch(toupper(answer)) {
        case 'T':
            //printing total
            printf("\nThe total Marks of the Students : %d\n",total);
            break;
        case 'A':
            //Calculating average
            average=(float)total/n;
            //printing average
            printf("\nAverage of the Students mark: %.2f\n",average);
            break;
        case 'H':
            //printing highest
            printf("\nHighest: %d\n",highest);
            break;
        case 'L':
            printf("\nLowest: %d\n",lowest);
            break;
        case 'C':
            //printing the count of pass and fail
            printf("\nTotal number of student pass: %d\n",pass);
            printf("\nTotal number of student fail: %d\n",fail);
            break;
        default:
            printf("\nInvalid Option, Select T/A/H/L/C\n");
            break;





        }
    } while(answer != 'Q');

    return 0;
}