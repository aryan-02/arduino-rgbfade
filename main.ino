#define red 9 // Red pin number (PWM)
#define blue 10 // Green pin number (PWM)
#define green 11 // Blue pin number (PWM)

const int fadeAmount = 7; // Indicates how fast fading should happen.

void setup() 
{
	pinMode(red, OUTPUT); 
	pinMode(green, OUTPUT); 
	pinMode(blue, OUTPUT); 
}

void loop() 
{
	// Here is some example code using the fade function.
	rgb(0,0,0);
	delay(1000);
	fade(0, 0, 0, 255, 215, 5);
	rgb(255, 215, 0);
	delay(2000);
	fade(255, 215, 0, 255, 0, 90);
	delay(2000);
	fade(255, 0, 90, 0, 20, 0);
	delay(2000);
	fade( 0, 20, 0, 200, 50, 50);
	delay(2000);
	fade(200, 50, 50 ,50, 70, 50);
	delay(2000);
	fade(50, 70, 50, 0, 90, 0);
	delay(2000);
	fade(0, 90, 0, 0, 255, 0);
	delay(2000);
	fade(0, 255, 0, 255, 0, 0);
	delay(2000);
	fade(255, 0, 0, 0, 0, 255);
	delay(2000);
	fade(0, 0, 255, 99, 100, 105);
}

int rgb (int redC, int greenC, int blueC) {
		analogWrite(red, redC);
		analogWrite(green, greenC);
		analogWrite(blue, blueC);
}

int fade(int fromR, int fromG, int fromB, int toR, int toG, int toB) 
{

	rgb(fromR, fromG, fromB);
		bool incrementR = (fromR <= toR);
		bool incrementG = (fromG <= toG);
		bool incrementB = (fromB <= toB);

		if(incrementR) {
					while(fromR < toR) {
					analogWrite(red ,fromR);
					fromR += (fadeAmount);
					delay(30);
								
			}
		}
		else{
					while(fromR > toR) {
					analogWrite(red ,fromR);
					fromR -= (fadeAmount);
					delay(30);
		}
		}
		
		if(incrementG) {
					while(fromG < toG) {
					analogWrite(green ,fromG);
					fromG += (fadeAmount);
					delay(30);
								
			}
		}
		else{
					while(fromG > toG) {
					analogWrite(green ,fromG);
					fromG -= (fadeAmount);
					delay(30);
		}
		}               


		if(incrementB) {
					while(fromB < toB) {
					analogWrite(blue ,fromB);
					fromB += (fadeAmount);
					delay(30);
								
			}
		}
		else{
			while(fromB > toB) {
				analogWrite(blue ,fromB);
				fromB -= (fadeAmount);
				delay(30);
			}	
		}  

}
