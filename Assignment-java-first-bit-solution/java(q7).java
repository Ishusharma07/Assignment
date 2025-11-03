class car{
int model , feul;
double price;
String brand , color;

void setModel(int m){
this.model = m;
}

void setFeul(int f){
this.feul = f;
}

void setPrice(double j){
this.price = j;
}

void setBrand(String s){
this.brand = s;
}

void setColor(String c){
this.color = c;
}

}// car end here


class Test{
public static void main(String[] args){

car c1 = new car();
c1.setModel(2006);
c1.setFeul(30);
c1.setPrice(30000.0);
c1.setBrand("alto");
c1.setColor("white");

System.out.println("model" + c1.model);
System.out.println("fuel" + c1.feul);
System.out.println("price" + c1.price);
System.out.println("brand => " + c1.brand);
System.out.println("color =>  " + c1.color);



}// Test ends here
}


 Ans = C:\Users\hp\Desktop\java> java Test
model2006
fuel30
price30000.0
brand => alto
color =>  white

