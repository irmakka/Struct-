#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct StudentCard{
	int id;
	char studentClass [5];
};

struct Student{
	char name[20];
	char surname[20];
	int age;
    struct StudentCard studentcard;
	
};
void printFunction( struct Student student ){
	printf("%s\t%s\t%s\t%s\t%s","name","surname","age","card id","student class");
	printf("\n");
	printf("%s\t%s\t%d\t%d\t%s",student.name,student.surname,student.age, student.studentcard.id,student.studentcard.studentClass);
}

int main(int argc, char *argv[]) {
    struct Student student1 ={ "Irmak","Kahya",20,{ 100,"8-A"}};
    printFunction( student1);

  return 0;
}
