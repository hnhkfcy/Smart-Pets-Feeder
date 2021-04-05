#ifndef hx711_h
#define hx711_h


class hx711
{
	public:
	
	struct hx711_pin{
     int SCK;			//时钟线
      int SDA;			//数据线
     int EN;                        //校准使能
     int calibration;            //校准
     int coefficient;            //比例系数
     int weight;                    //重量
    unsigned long value;        //记录数值
	unsigned long value_t;        //记录数值
    };
	
    void set_pin(struct hx711_pin *value);
 
 
    void init_pin(struct hx711_pin *value);
 
    void set_pin_t(struct hx711_pin *value_t);
 
    void init_pin_t(struct hx711_pin *value_t);
    
 //数据测量和显示 
    int hx711_two(struct hx711_pin *value,struct hx711_pin *value_t);

};
    
#endif /* hx711_h */
