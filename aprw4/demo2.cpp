#include <stdio.h>
class CRectangle {
    int x, y;
  public:
    void set_values (int,int);
    int area () {return (x*y);}
};

/**
void classname::member_function_name(){
//access members of classname.
}
**/

void CRectangle::set_values (int a, int b) { x = a;
 y = b; 
}

int main () {
  CRectangle rect;
  rect.set_values (3,4);
  printf("area: %d\n", rect.area());
  return 0;
}
