#include <iostream>
#include <string>

using namespace std;

float ode(float w, float y){
    return (-w*y);
}

float explicito(float w, float y, float t) 
{ 
    y=y-t*w*y;
    return y;
} 

float main(float w, float y, float t) { 
    
    w = 0.1; 
    y = 1.0; 
    t = 1.0; 
  
    explicito(w, y, t); 
    return 0; 
}
