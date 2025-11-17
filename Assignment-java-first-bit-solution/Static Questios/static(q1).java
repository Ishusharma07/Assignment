
class bank{
int accountnumber;
String accountholder;
double currentbalance;
static double interestrate;

// default
bank(){
this.accountnumber = 122112;
this.accountholder = "ishu";
this.currentbalance = 233232.2;
//this.interestrate = 2.1;
}

// default parameter
bank(int d , String str , double c ){
this.accountnumber =  d;
this.accountholder = str;
this.currentbalance= c;
// this.interestrate = d

}

 // setter 
void setaccountnumber(int a){
this.accountnumber = a;
}

void setaccountholder(String s){
this.accountholder = s;
}

void setcurrentbalance(double c){
this.currentbalance = c;
}

static void setinterestrate(double e){
interestrate = e;
}

// getter 
int getaccountnumber(){
return this.accountnumber;
}

String getaccountholder(){
return this.accountholder;
}

double getcurrentbalance(){
return this.currentbalance;
}


void display(){
System.out.println("accunt number :  " + this.accountnumber);
System.out.println("accunt name :  " + this.accountholder);
System.out.println("accunt currentbalance : " + this. currentbalance);
System.out.println("accunt interestrate : " + this.interestrate);

}

static void setinterestrate(int i){
interestrate = i;
}

}

class main{
public static void main(String[] args){
 bank b1 = new bank();

b1 = new bank(12121 , "kanu" , 121111);
bank b2 = new bank(121231 , "yash" , 12232 );

b1.setaccountnumber(12311);
b1.setaccountholder("ishu");
b1.setcurrentbalance(12121);
//b1.setinterestrate(12.2);



bank.setinterestrate(3.5);
    b1.display();
    b2.display();
   
}
}