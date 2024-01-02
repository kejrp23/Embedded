
//Class to help control peripherals on Arduino board. User Friendly Interface.

class device {
		public:
			
			const int pin;
			int datapin;
			int response;
			int last_status = 0;

			device(int pin_number)
					:pin{pin_number}{};

			device(int pin_number, int data)
					:pin{pin_number}, datapin{data}{};



			void on(){
				if (last_status == 0){ 
				  digitalWrite(pin,HIGH);
				  last_status = 1;
				  };
			};


			void off(){
				if (last_status == 1){
				  digitalWrite(pin,LOW);
				  last_status = 0;
				  };
			};

			int read(){
					response = digitalRead(datapin);
					return response;
			};

			void toggle(int time){
					on();
					delay(time);
					off();
					delay(time);
			};


			//controls for typical low power  relay switches are backwards
			void relay_on(){
					digitalWrite(pin,LOW);
					last_status = 1;
			};

			void relay_off(){
					digitalWrite(pin,HIGH);
					last_status = 0;
			};
			//will expand this section for high power relay's if needed			
		
};

