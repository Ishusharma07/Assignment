class hr{
int id  , salary;
String name;
double commission;
void setId(int i){
this.id = i;
}

void setName(String str){
this.name = str;
}

void setSalary(int sa){
this.salary = sa;
}

void setCommission(double c){


this.commission= c;
}

}// main ends here


class Test{
public static void main(String[] args){
hr h1 = new hr();
h1.setId(1);
h1.setName("yash");
h1.setSalary(20000);
h1.setCommission(0.10);

System.out.println("id : " + h1.id);
System.out.println("name: " + h1.name);
System.out.println("salary:" + h1.salary);
System.out.println("commission :" + h1.commission);

}// Test end here
}


Ans = id : 1
name: yash
salary:20000
commission :0.1
