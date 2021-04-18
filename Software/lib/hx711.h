#ifndef hx711_h
#define hx711_h


class hx711
{
	public:
	
	struct hx711_pin{
     int SCK;			//Clock lines
      int SDA;			//Data cable
     int EN;                        //Calibration Enabled
     int calibration;            //Calibration
     int coefficient;            //Proportionality factor
     int weight;                    //Weight
    unsigned long value;        //Record values
	unsigned long value_t;        //Record values
    };
	
    void set_pin(struct hx711_pin *value);
 
 
    void init_pin(struct hx711_pin *value);
 
    void set_pin_t(struct hx711_pin *value_t);
 
    void init_pin_t(struct hx711_pin *value_t);
    
 //Data measurement and display
    int hx711_two(struct hx711_pin *value,struct hx711_pin *value_t);

};
    
#endif /* hx711_h */
