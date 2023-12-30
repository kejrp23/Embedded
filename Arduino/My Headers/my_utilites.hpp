//This file is to contain useful function's and templates to make every day embedded programming easier. 

template<typename T>
void error(T errornumber){
		Serial.print("An Error has occurred in: ");
		Serial.println(errornumber);
};


//not sure this would work as intended, revisit.

template<typename T>
void error(T msg, T errornumber){
		Serial.println(msg,errornumber);
};



template<typename T>
void println(T x){
		Serial.println(x);
};

template<typename T>
void bitsizeof(T x){
		std::cout << sizeof(x) * 8 << '\n';
};
