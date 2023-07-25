

struct device {
    const int pin;
    int datapin;
    int last_status = 0;

    device(int pin_number)
			:pin{pin_number}{};

    device(int pin_number, int data)
      		:pin{pin_number}, datapin{data}{};
};
