class student{
int  rollno , marks;
String name;

void setRollno(int r){
this.rollno = r;
}
void setMarks(int m){
this.marks = m;
}
void setName(String str){
this.name= str;
}// main end here
}
class Test{
public static void main(String[] args){
student s1 = new student();
s1.setRollno(12);
s1.setMarks(340);
s1.setName("kanu");

System.out.println("rollno : " + s1.rollno);
System.out.println("Marks : " + s1.marks);
System.out.println("name : " + s1.name);
} // Test end here
}

 Ans =  C:\Users\hp\Desktop\java> java Test
rollno : 12
Marks : 340
name : kanu