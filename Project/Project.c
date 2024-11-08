//
//
// [STUDENT DATABASE MANAGEMENT SYSTEM]
//
//

#include <stdio.h>
#include <conio.h>

void addstudent();
void studentrecord();
void searchstudent();
void delete();

struct student
{
    char first_name[20];
    char last_name[20];
    int roll_no;
    char Class[10];
    char vill[20];
    float per;
};

int main()
{
    int choice;

    while (choice != 5)
    {
        printf("\n");
        printf("\n");
        printf("\n");

        printf("\t\t\t<=====[ STUDENT DATABASE MANAGEMENT SYSTEM ]=====>");

        printf("\n\n\n\t\t\t\t     1. Add Student\n");
        printf("\t\t\t\t     2. Students Records\n");
        printf("\t\t\t\t     3. Search Student\n");
        printf("\t\t\t\t     4. Delete Student\n");
        printf("\t\t\t\t     5. Exit\n");
        printf("\t\t\t\t    _____________________\n");
        printf("\t\t\t\t     ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            addstudent();

            break;
        case 2:

            studentrecord();
            printf("\t\t\t\t  press any key to exit..... \n");
            getch();

            break;

        case 3:

            searchstudent();
            printf("\n\t\t\t\t  Press any key to exit.......\n");

            getch();

            break;

        case 4:

            delete ();
            printf("\n\t\t\t\tPress any key to exit.......\n");
            getch();

            break;
        case 5:

            printf("\n\t\t\t\tThank you, for used this software.\n\n");

            break;

        default:

            getch();
            printf("\n\t\t\t\t\tEnter a valid number\n\n");
            printf("\t\t\t\tPress any key to continue.......");
            getch();

            break;
        }
    }

    getch();
}

void addstudent()
{
    char another;
    FILE *fp;
    int n;
    int i;

    struct student info;
    do
    {

        printf("\t\t\t\t=======Add Students Info=======\n\n\n");
        fp = fopen("information.txt", "a");

        getchar();

        printf("\n\t\t\tEnter First Name     : ");
        scanf(" %s", &info.first_name);

        printf("\n\t\t\tEnter Last Name     : ");
        scanf(" %s", &info.last_name);

        printf("\n\t\t\tEnter Roll-No       : ");
        scanf("%d", &info.roll_no);

        getchar();

        printf("\n\t\t\tEnter Class(course) : ");
        scanf(" %s", &info.Class);

        printf("\n\t\t\tEnter Address       : ");
        scanf(" %s", &info.vill);

        printf("\n\t\t\tEnter Percentage    : ");
        scanf("%f", &info.per);

        printf("\n\t\t\t______________________________\n");

        if (fp == NULL)
        {
            fprintf(stderr, "can't open file");
        }
        else
        {
            printf("\t\t\tRecord stored successfuly\n");
        }

        fwrite(&info, sizeof(struct student), 1, fp);
        fclose(fp);

        printf("\t\t\tYou want to add another record?(y/n) : ");

        scanf("%s", &another);

    } while (another == 'y' || another == 'Y');
}

void studentrecord()
{

    FILE *fp;

    struct student info;
    fp = fopen("information.txt", "r");

    printf("\t\t\t\t=======STUDENTS RECORD=======\n\n\n");

    if (fp == NULL)
    {
        fprintf(stderr, "There is no record\n");
    }
    else
    {
        printf("\t\t\t\tRECORDS :\n");
        printf("\t\t\t\t___________\n\n");
    }

    while (fread(&info, sizeof(struct student), 1, fp))
    {
        printf("\n\t\t\t\t Student Name  : %s %s", info.first_name, info.last_name);
        printf("\n\t\t\t\t Roll NO       : %d", info.roll_no);
        printf("\n\t\t\t\t Class         : %s", info.Class);
        printf("\n\t\t\t\t Village/City  : %s", info.vill);
        printf("\n\t\t\t\t Percentage    : %f", info.per);
        printf("\n\t\t\t\t ________________________________\n");
    }
    fclose(fp);
    getch();
}

void searchstudent()
{
    struct student info;
    FILE *fp;
    int roll_no;
    int found = 0;

    fp = fopen("information.txt", "r");
    printf("\t\t\t\t=======SEARCH STUDENTS RECORD=======\n\n\n");
    printf("\t\t\tEnter the roll no : ");

    scanf("%d", &roll_no);

    while (fread(&info, sizeof(struct student), 1, fp) > 0)
    {

        if (info.roll_no == roll_no)
        {

            found = 1;
            printf("\n\n\t\t\tStudent Name : %s %s", info.first_name, info.last_name);
            printf("\n\t\t\tRoll NO        : %d", info.roll_no);
            printf("\n\t\t\tClass          : %s", info.Class);
            printf("\n\t\t\tAddress        : %s", info.vill);
            printf("\n\t\t\tPercentage     : %f", info.per);
            printf("\n\t\t\t______________________________________\n");
        }
    }

    if (!found)
    {
        printf("\n\t\t\tRecord not found\n");
    }

    fclose(fp);
    getch();
}

void delete()
{
    struct student info;
    FILE *fp, *fp1;

    int roll_no;
    int found = 0;

    printf("\t\t\t\t=======DELETE STUDENTS RECORD=======\n\n\n");
    fp = fopen("information.txt", "r");
    fp1 = fopen("temp.txt", "w");

    printf("\t\t\t\tEnter the roll no : ");
    scanf("%d", &roll_no);

    if (fp == NULL)
    {
        fprintf(stderr, "can't open file\n");
    }

    while (fread(&info, sizeof(struct student), 1, fp))
    {
        if (info.roll_no == roll_no)
        {

            found = 1;
        }
        else
        {
            fwrite(&info, sizeof(struct student), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if (!found)
    {
        printf("\n\t\t\t\tRecord not found\n");
    }
    if (found)
    {
        remove("information.txt");
        rename("temp.txt", "information.txt");

        printf("\n\t\t\t\tRecord deleted succesfully\n");
    }

    getch();
}