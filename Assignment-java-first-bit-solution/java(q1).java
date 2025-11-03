class employe{
int id ,  salary;
String name;

void setId(int a){
this.id = a;
}


void setName(String str){
this.name = str ;
}


void setSalary(int s){
this.salary = s;
}

}// employe end here

class Test{ 
public static void main(String[] args){

employe e1 = new employe();
e1.setId(1);
e1.setName("Ishu");
e1.setSalary(23000);

System.out.println("employe id  : " + e1.id );
System.out.println("employe name  : " + e1.name );
System.out.println("employe salary  : " + e1.salary );
}// main end here;
}


C:\Users\hp\Desktop\java>java Test
employe id  : 1
employe name  : Ishu
employe salary  : 23000
