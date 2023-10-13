
//Initializaion (Longer Code)
//#include <stdio.h>
//#include <string.h>
//
//
//	struct student{
//		char name[100];
//		float cgpa;
//		int roll ;
//	};
//	
//	
//int main(){
//
//	struct student s1;
//		strcpy(s1.name,"Agamjot Singh");
//		s1.roll=123;
//		s1.cgpa=9.8;
//	
//		struct student s2;
//		strcpy(s2.name,"Gaganjot Singh");
//		s2.roll=122;
//		s2.cgpa=9.7;
//	
//		struct student s3;
//		strcpy(s3.name,"Karanjot Singh");
//		s3.roll=124;
//		s3.cgpa=9.6;
//	
//	printf("%d\n",s3.roll);
//	printf("%f\n",s1.cgpa);
//	printf("%s\n",s2.name)
//;}
//
//

////Initialization of Array of Structures
//#include <stdio.h>
//#include <string.h>
//
//
//	struct student{
//		char name[100];
//		float cgpa;
//		int roll ;
//	};
//	
//	
//int main(){
//     struct student COE[100];
//     COE[99].roll=1234;
//     strcpy(COE[20].name,"Agamjot Singh");
//     COE[0].cgpa=9.8;
//     printf("%d\n",COE[99].roll);
//     printf("%f\n",COE[0].cgpa);
//     printf("%s\n",COE[20].name);
//}


//
////Simple Initialization+ pointer to structure
//#include <stdio.h>
//#include<string.h>
//struct student{
//	char name[100];
//	int roll;
//	float cgpa;
//};
//int main(){
//	struct student s1={"Agamjot Singh",1234,9.8
//	};
//	struct student s2={0
//	};
//	
//	//struct student s1;    //int a;
//	struct student*ptr;   // int*ptr;
// 	ptr=&s1;              //ptr=&a;
// 	
// 	printf("%d",(*ptr).roll);
//}




////add 2 vectors
//#include <stdio.h>
//
//struct vector{
//int x;
//int y;	
//};
//
//void Sum(struct vector v1, struct vector v2, struct vector sum);
//
//int main(){
//struct vector v1={3,9};
//struct vector v2={4,7};
//struct vector sum ={0};
//Sum(v1,v2,sum);
//	
//}
//
//
//void Sum(struct vector v1, struct vector v2, struct vector sum){
//	sum.x=v1.x+ v2.x;
//	sum.y= v1.y+v2.y;
//	
//	printf("sum of x is %d \n", sum.x);
//	printf("sum of y is %d\n",sum.y);
//}
//

//// print complex numbers using arrow operator
//
//#include<stdio.h>
//
//struct complex{
//	int real;
//	int img;
//};
//
//int main(){
//	struct complex z1={3,7};
//	struct complex *ptr= &z1;
//	printf("Real part is %d \n", ptr->real);   //printf("Real part is %d", (*ptr).real);
//	printf("Imaginary part is %d \n", ptr->img);  //printf("Imaginary part is %d", (*ptr).img);
//	}




////store bank account info of ABC Bank using alias
//#include<stdio.h>
//typedef struct Bank_Info{
//	char name[100];
//	int accno;
//}ABC;
//
//int main(){
//	ABC c1={"Agamjot Singh",98555};
//	ABC c2 ={"Nigga Singh",61990};
//    printf ("Name is %s and account number is %d\n", c1.name,c1.accno);
//    printf ("Name is %s and account number is %d\n", c2.name,c2.accno);
//}