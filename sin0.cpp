// g++ sin0 -o sin0.o
 #include <iostream>
 #include <cmath>
  using namespace std;
 int main (){
 double PI=3.14159265;
 double t, rad, cr, sr;// cosine result sine result
 //double t, result= 0;//theta in terms of degrees
	for (t=0 ; t<=360 ; t=t+15)
		{
	rad = t * (PI / 180);
	cr = cos(rad);
	sr = sin(rad);
		cout << t <<"\t" <<cr<<"\t"<< sr<,"\r";
		}
		return 0;
		}
 
 
