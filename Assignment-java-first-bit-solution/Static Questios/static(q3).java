class  LibraryUser {
String name;
int dayslater;
static double finepay;

LibraryUser(){
this.name = "kanu";
this.dayslater = 3;
}
LibraryUser(String s  , int d){
this.name = s;
this.dayslater = d;
} 

void setname(String s){
this.name = s;
}

void setdayslater(int d){
this.dayslater= d;
}

String getname(){
return this.name;
}

int getdayslater(){
return this.dayslater;
}


double calculateFine(){
   return dayslater * finepay;
} 

void display(){
System.out.println("name :" + this.name);
System.out.println("dayslater :" + this.dayslater);
System.out.println("Fine: " + calculateFine());

}
}



class main{
public static void main(String[] args){
 LibraryUser u1 = new  LibraryUser();
 LibraryUser  u2 = new  LibraryUser ("Ishu" , 4);

u1.setname("yash");
u1.setdayslater(2);

LibraryUser.finepay = 5.5;
u1.display();
u2.display();

}
}
