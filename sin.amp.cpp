// g++ sin0 -o sin0.o
 #include <iostream>
 #include <cmath>
  using namespace std;
  
  double r4(double var)
  // r4 rounds a decimal to 4 decimals
  {
	double value;
	
	if (var < 0) {
			value = (int)(var * 10000 - 0.0005);
		}
	else{
			value = (int)(var * 10000 + 0.0005);
	}	
	return (double)value / 10000;
}
 int main (){
 double PI=3.14159265;
 double a,p, t, rad,sr, aspr;// cosine result sine result
  //double t, result= 0;//theta in terms of degrees
 // aspr (amplitude * sine (period*t))
 cout<<"\nInput an amplitude : ";
 cin>>a;
 cout<<"\nInput a period : ";
 cin>>p;
 cout <<"\nTheta\tsin(t)\ta*sin(pt) \n";
	for (t=0 ; t<=360 ; t=t+15)
		{
	rad = t * (PI / 180);

	sr = sin(rad);
		cout << t <<"\t"<< r4(sr)<<"\t\t"<<r4(aspr)<<"\n";
		}
		return 0;
		}
 
 
