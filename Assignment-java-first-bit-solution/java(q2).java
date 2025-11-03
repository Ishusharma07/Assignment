class admin{
int id , salary , alloweince;
String name;
void setId(int a){
this.id = a;
}

void setName(String str){
this.name = str;
}

void setSalary(int i){
this.salary = i;
}

void setAlloweince(int al){
this.alloweince= al;
}
}

class Test{
public static void main(String[] args){
admin a1 = new admin();
a1.setId(1);
a1.setName("Ishu");
a1.setSalary(23000);
a1.setAlloweince(2000);

System.out.println("id : " + a1.id);
System.out.println("name : " + a1.name);
System.out.println(" Salary" + a1.salary);
System.out.println("Alloweince: " + a1.alloweince);


}// main end here
}

Ans =    C:\Users\hp\Desktop\java> java Test
id : 1
name : Ishu
 Salary23000
Alloweince: 2000