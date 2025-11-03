class book{
int ibsn, price;
String category , name;
void setIbsn(int a){
this.ibsn = a;
}
void setName(String str){
this.name = str;
}

void setCategory(String c){
this.category = c;
}

void setPrice(int p){
this.price = p;
}// main end here 
}

class Test{
public static void main(String[] args){
book b1 = new book();
b1.setIbsn(978-0-545-01022-1);
b1.setName("The Ramayana");
b1.setCategory("Religious");
b1.setPrice(23000);

System.out.println("isbn" + b1.ibsn);
System.out.println("name" + b1.name);
System.out.println("category" + b1.category);
System.out.println("price" + b1.price);

} // test ends here;
}


Ans = C:\Users\hp\Desktop\java> java Test
isbn-98
nameThe Ramayana
categoryReligious
price23000