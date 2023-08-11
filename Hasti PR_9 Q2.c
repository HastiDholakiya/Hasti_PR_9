#include<stdio.h>

struct Student{
	
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	int total;
	float percentage;
	
};

void main()
{
	struct Student s1,s2,s3,s4,s5;
	
	int total=0;
	int chem_marks=0,maths_marks=0,phy_marks=0;
	float percentage=0;
	
	printf("Enter detalis of Student 1: \n");
	
	
	printf("Roll no : ");
	scanf("%d",&s1.roll_no);
	printf("Name : ");
	scanf("%s",&s1.name);
	printf("Chemistry : ");
	scanf("%d",&s1.chem_marks);
	printf("Mathematics : ");
	scanf("%d",&s1.maths_marks);
	printf("Physics : ");
	scanf("%d",&s1.phy_marks);
	
	printf("%s(%d)\n",s1.name,s1.roll_no);
	printf("Chemistry : %d\n",s1.chem_marks);
	printf("Mathemetics : %d\n",s1.maths_marks);
	printf("Physics : %d\n",s1.phy_marks);
	s1.total = s1.chem_marks+s1.maths_marks+s1.phy_marks;
	s1.percentage=s1.total*100/300;
	printf("Total : %d\n",s1.total);
	printf("Percentage : %f\n",s1.percentage);
	
	
	
	printf("Enter detalis of Student 2: \n");
	
	
	printf("Roll no : ");
	scanf("%d",&s2.roll_no);
	printf("Name : ");
	scanf("%s",&s2.name);
	printf("Chemistry : ");
	scanf("%d",&s2.chem_marks);
	printf("Mathematics : ");
	scanf("%d",&s2.maths_marks);
	printf("Physics : ");
	scanf("%d",&s2.phy_marks);
	
	printf("%s(%d)\n",s2.name,s2.roll_no);
	printf("Chemistry : %d\n",s2.chem_marks);
	printf("Mathemetics : %d\n",s2.maths_marks);
	printf("Physics : %d\n",s2.phy_marks);
	s2.total = s2.chem_marks+s2.maths_marks+s2.phy_marks;
	s2.percentage=s2.total*100/300;
	printf("Total : %d\n",s2.total);
	printf("Percentage : %f\n",s2.percentage);
	
	
    printf("Enter detalis of Student 3: \n");
	
	
	printf("Roll no : ");
	scanf("%d",&s3.roll_no);
	printf("Name : ");
	scanf("%s",&s3.name);
	printf("Chemistry : ");
	scanf("%d",&s3.chem_marks);
	printf("Mathematics : ");
	scanf("%d",&s3.maths_marks);
	printf("Physics : ");
	scanf("%d",&s3.phy_marks);
	
	printf("%s(%d)\n",s3.name,s3.roll_no);
	printf("Chemistry : %d\n",s3.chem_marks);
	printf("Mathemetics : %d\n",s3.maths_marks);
	printf("Physics : %d\n",s3.phy_marks);
	s3.total = s3.chem_marks+s3.maths_marks+s3.phy_marks;
	s3.percentage=s3.total*100/300;
	printf("Total : %d\n",s3.total);
	printf("Percentage : %f\n",s3.percentage);
	
	
	printf("Enter detalis of Student 4: \n");
	
	
	printf("Roll no : ");
	scanf("%d",&s4.roll_no);
	printf("Name : ");
	scanf("%s",&s4.name);
	printf("Chemistry : ");
	scanf("%d",&s4.chem_marks);
	printf("Mathematics : ");
	scanf("%d",&s4.maths_marks);
	printf("Physics : ");
	scanf("%d",&s4.phy_marks);
	
	printf("%s(%d)\n",s4.name,s4.roll_no);
	printf("Chemistry : %d\n",s4.chem_marks);
	printf("Mathemetics : %d\n",s4.maths_marks);
	printf("Physics : %d\n",s4.phy_marks);
	s4.total = s4.chem_marks+s4.maths_marks+s4.phy_marks;
	s4.percentage=s4.total*100/300;
	printf("Total : %d\n",s4.total);
	printf("Percentage : %f\n",s4.percentage);
	
	
	printf("Enter detalis of Student 5: \n");
	
	
	printf("Roll no : ");
	scanf("%d",&s5.roll_no);
	printf("Name : ");
	scanf("%s",&s5.name);
	printf("Chemistry : ");
	scanf("%d",&s5.chem_marks);
	printf("Mathematics : ");
	scanf("%d",&s5.maths_marks);
	printf("Physics : ");
	scanf("%d",&s5.phy_marks);
	
	printf("%s(%d)\n",s5.name,s5.roll_no);
	printf("Chemistry : %d\n",s5.chem_marks);
	printf("Mathemetics : %d\n",s5.maths_marks);
	printf("Physics : %d\n",s5.phy_marks);
	s5.total = s5.chem_marks+s5.maths_marks+s5.phy_marks;
	s5.percentage=s5.total*100/300;
	printf("Total : %d\n",s5.total);
	printf("Percentage : %f\n",s5.percentage);
}
