

struct device {
    const int pin;
    int datapin;
    int last_status = 0;

    device(int pin_number)
			:pin{pin_number}{};

    device(int pin_number, int data)
      		:pin{pin_number}, datapin{data}{};



	void on(){
			if (last_status == 0){ digitalWrite(pin,HIGH)}

			else if (last_status == 1){}};

	void off(){
			if (last_status == 1){ digitalWrite(pin,LOW)}

			else if (last_status == 1){}};



};
