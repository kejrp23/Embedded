

template<typename T>
void error(T x){
		Serial.print("An Error has occurred in: ");
		Serial.println(x);
};


template<typename T>
void error(T msg, T x){
		Serial.println(msg,x);
};

template<typename T>
void println(T x){
		Serial.println(x);
};

template<typename T>
void print(T x){
		Serial.print(x);
};





