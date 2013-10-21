int column[]={0,1,2,3,4,5,6,7,8,9,10,11,12};
int row[] = {14,15,16,17,18};


void setup()
{
  for (int i=0;i<13;i++){
  pinMode(column[i],OUTPUT);
  digitalWrite(column[i],LOW);
  }  
  
  for (int j=0;j<5;j++){
  pinMode(row[j],OUTPUT);
  digitalWrite(row[j],HIGH);
  }  
}
void loop () {

for(int x=0;x<1000;x++){
zero(0);
zero(3);
zero(6);
}  

for(int x=0;x<1000;x++){  
one(-3);
one(0);
one(3);
one(6);
}
for(int x=0;x<1000;x++){
two(0);
two(3);
two(6);
}
for(int x=0;x<1000;x++){
three(0);
three(3);
three(6);
}
for(int x=0;x<1000;x++){
four(0);
four(3);
four(6);
}
for(int x=0;x<1000;x++){
five(0);
five(3);
five(6);
}
for(int x=0;x<1000;x++){
six(0);
six(3);
six(6);
}
for(int x=0;x<1000;x++){
seven(0);
seven(3);
seven(6);
}

for(int x=0;x<1000;x++){
eight(0);
eight(3);
eight(6);
}

for(int x=0;x<1000;x++){
nine(0);
nine(3);
nine(6);
}




  

}

void allOn(){
  for(int x=0;x<5;x++){
    for(int y=0;y<13;y++){
      digitalWrite(row[x],LOW);
      digitalWrite(column[y],HIGH);
    }
  }
}

void allOff(){
  for(int x=0;x<5;x++){
    for(int y=0;y<13;y++){
      digitalWrite(row[x],HIGH);
      digitalWrite(column[y],LOW);
    }
  }
}

void zero(int x){
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[0],HIGH);
  
    digitalWrite(column[2+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[0],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[3],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[1],HIGH);
  
}

void one(int x){
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
}

void two(int x){
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
    
}

void three(int x){
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
    
}

void four(int x){
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
   
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
}

void five(int x){
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
    
}

void six(int x){
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[1],HIGH);
    
}

void seven(int x){
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
}

void eight(int x){
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[0],HIGH);
  
    digitalWrite(column[2+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[0],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[3],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
    digitalWrite(column[1+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[1],HIGH);
  
      digitalWrite(column[2+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[2],HIGH);
  
}

void nine(int x){
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[0],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[0],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[1],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[1],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[3],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[4],HIGH);
  
  digitalWrite(column[1+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[1+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[2],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[2],HIGH);
  
  digitalWrite(column[3+x],HIGH);
  digitalWrite(row[3],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[3],HIGH);
   
  digitalWrite(column[2+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[2+x],LOW);
  digitalWrite(row[4],HIGH);
  
    digitalWrite(column[3+x],HIGH);
  digitalWrite(row[4],LOW);
  digitalWrite(column[3+x],LOW);
  digitalWrite(row[4],HIGH);
  
  
}
  

