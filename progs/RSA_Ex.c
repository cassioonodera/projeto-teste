#include<stdio.h> 
#include<math.h> 
int gcd(int a, int h) 
{ 
    int temp; 
    while (1) 
    { 
        temp = a%h; 
        if (temp == 0) 
          return h; 
        a = h; 
        h = temp; 
    } 
} 

int main() 
{ 
    //float p = 5; 
    float p = 3; 
    float q = 7; 
  
    float n = p*q; 
  
    float e = 2; 
    float phi = (p-1)*(q-1); 
    while (e < phi) 
    { 
        if (gcd(e, phi)==1) 
            break; 
        else
            e++; 
    } 
  
    int k = 2;
    int intphi = (int)phi;
    int inte = (int)e;
    float d = 0;
    while (1) {
    	printf("phi=%d - e=%d - resto=%d\n",intphi,inte,(1+k*intphi) % inte);
    	if(((1+k*intphi) % inte) == 0) {
    		d = (1 + (k*phi))/e; 
    		break;
		}
		else {
			k++;
		}
	}
  
    float msg = 20; 
  
    printf("P = %f - Q = %f\n", p, q); 
    printf("Chave publica = (%f,%f)\n", e, n); 
    printf("Chave privada = (%f,%f)\n", d, n); 


    printf("Message data = %f", msg); 
  
    float c = pow(msg, e); 
    c = fmod(c, n); 
    printf("\nEncrypted data = %f", c); 
  
    float m = pow(c, d); 
    m = fmod(m, n); 
    printf("\nOriginal Message Sent = %f", m); 
  
    return 0; 
} 
