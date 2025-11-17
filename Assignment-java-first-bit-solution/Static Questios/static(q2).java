

class Electricitybill{
int meternumber ,   totalbill ,reading ;
double unit;
String  customername;
String  paymentstatus;
  static double ratePerUnit = 7.5;

// default
Electricitybill(){
this.meternumber = 121;
this.totalbill = 10000;
this.reading = 1230;
this.unit = 7.50;
this.customername = "kanu";
this.paymentstatus = "paid";
}

// partameter
Electricitybill(int m , int t , int r , double u , String c , String p){
this.meternumber = m;
this.totalbill = t;
this.reading = r;
this.unit = u;
this.customername  = c;
this.paymentstatus = p;
}

// setter
void setmeternumber(int i){
this.meternumber = i;
}

void setunit(double u){
    this.unit = u;
}

void  settotalbill(int a){
this.totalbill = a;
}
void  setreading(int b){
this.reading = b;
}

void setcustomername(String s){
this.customername = s;
}
void setpaymentstatus(String b){
this.paymentstatus = b;
}

//getter
int getmeternumber(){
 return this.meternumber;
}

int  gettotalbill(){
 return this.totalbill ;
}

int  getreading(){
return this.reading;
}

String getcustomername(){
 return this.customername;
}

String getpaymentstatus(){
 return this.paymentstatus;
}
void display(){
System.out.println("meternumber : " + this.meternumber);
System.out.println("totalbill : " + this.totalbill);
System.out.println("reading : " + this.reading);
System.out.println("unit: " + this.unit);
System.out.println(" ratePerUnit" + this.ratePerUnit);
System.out.println("customername : " + this. customername);
System.out.println("paymentstatus : " + this.paymentstatus );
System.out.println("ratePerUnit : " + this.ratePerUnit);

}
static void setrate(double rate){
 ratePerUnit = rate;
}

double calculateBill() {
        totalbill = (int)(unit * ratePerUnit);
        return totalbill;
    }

}

class Main{
public static void main(String[] args){
Electricitybill e1 = new Electricitybill();

e1 = new  Electricitybill (12 , 30000 , 1320 , 7.50 , "Ishu" , "paid" );
Electricitybill e2 = new Electricitybill(13 , 40000 ,  1220 , 5.50 , "ujjwal" , "unpaid");

e1.setmeternumber(1443);
e1.settotalbill(10000);
e1.setreading(2100);
e1.setunit(3.89);
e1.setcustomername("ishant");
e1.setpaymentstatus("paid");

Electricitybill.setrate(8.0);

e1.calculateBill();
e2.calculateBill();
e1.display();
e2.display();

}
}