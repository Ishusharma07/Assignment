class product{
int id , price , quantity;
String name;
void setId(int d){
this.id= d;
}

void setName(String str){
this.name= str;
}

void setQuantity(int a){
this.quantity = a;
}

void setPrice(int p){
this.price = p;
}

}// main end here
class Test{
public static void main(String[] args){
product p1 = new product();
p1.setId(1);
p1.setName ("laptop");
p1.setPrice(40000);
p1.setQuantity(5);

System.out.println("id : " + p1.id );
System.out.println("name " + p1.name );
System.out.println("price " + p1.price );
System.out.println("quantity : " + p1.quantity);


}// test end here
}


 ans = C:\Users\hp\Desktop\java> java Test
id : 1
name laptop
price 40000
quantity : 5