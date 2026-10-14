#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a==0){
    if(b==0){
      if(c==0)
      printf("VSN");
      else
        printf("VN");
    }
    else
      printf("%.2f",(float)-c/b);
  }
  else{
    float delta,x1,x2;
    delta=b*b-4*a*c;
    if(delta<0)
      printf("VN");
    else if(delta==0)
      printf("Nghiem kep: %.2f",(float)-b/(2*a));
    else{
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("%f\n%f",x1,x2);
    }
  }
}

