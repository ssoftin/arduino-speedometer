// these scary blocks of 1 and 0 are just monochrome images converted from image file to code format
// I draw each symbol from 0 to 9 and corverted them to blocks of code

// image `km/h`
const uint8_t frame_kmh_40x16[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b11111000, 0b11111000, 0b00000000, 0b10000000, 0b11000000, 0b01100000, 0b00100000, 0b00000000, 0b00000000, 0b11100000, 0b11100000, 0b11000000, 0b01100000, 0b11100000, 0b11000000, 0b11100000, 0b01100000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b11110000, 0b00111000, 0b00000000, 0b00000000, 0b11111000, 0b11111000, 0b11000000, 0b01100000, 0b01100000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000011, 0b00000011, 0b00000110, 0b00001100, 0b00011000, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00011100, 0b00001111, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00000000, 
};
// image `m/h`
const uint8_t frame_mh_40x16[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11100000, 0b11100000, 0b11000000, 0b01100000, 0b11100000, 0b11000000, 0b11100000, 0b01100000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b11110000, 0b00111000, 0b00000000, 0b00000000, 0b11111000, 0b11111000, 0b11000000, 0b01100000, 0b01100000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00011100, 0b00001111, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b00011111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
};

// big images from 0 to 9
const uint8_t frame0_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b11001000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111110, 0b11111110, 0b11111101, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11100011, 0b11110111, 0b11100011, 0b11000001, 0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b11000001, 0b11100011, 0b11110111, 0b11100011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b01111111, 0b10111111, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000110, 0b00001110, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011100, 0b00010011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame1_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11000000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b11000001, 0b11100011, 0b11110111, 0b11100011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame2_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b11001000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11100000, 0b11110000, 0b11101000, 0b11011100, 0b10111110, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b00111110, 0b00011101, 0b00001011, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b01111111, 0b10111111, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000110, 0b00001110, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011100, 0b00010000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame3_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b11001000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001000, 0b00011100, 0b00111110, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b10111110, 0b11011101, 0b11101011, 0b11110111, 0b11100011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000110, 0b00001110, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011100, 0b00010011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame4_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11000000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111110, 0b11111110, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000111, 0b00001011, 0b00011101, 0b00111110, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b10111110, 0b11011101, 0b11101011, 0b11110111, 0b11100011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame5_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111110, 0b11111110, 0b11111101, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000111, 0b00001011, 0b00011101, 0b00111110, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b10111110, 0b11011100, 0b11101000, 0b11110000, 0b11100000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000110, 0b00001110, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011100, 0b00010011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame6_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111110, 0b11111110, 0b11111101, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11100011, 0b11110111, 0b11101011, 0b11011101, 0b10111110, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b10111110, 0b11011100, 0b11101000, 0b11110000, 0b11100000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b01111111, 0b10111111, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000110, 0b00001110, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011100, 0b00010011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame7_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b11001000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b11000001, 0b11100011, 0b11110111, 0b11100011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame8_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b11001000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111110, 0b11111110, 0b11111101, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11100011, 0b11110111, 0b11101011, 0b11011101, 0b10111110, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b10111110, 0b11011101, 0b11101011, 0b11110111, 0b11100011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b01111111, 0b10111111, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000110, 0b00001110, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011100, 0b00010011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};
const uint8_t frame9_40x56[] PROGMEM = {
	0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b01100000, 0b01110000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b11111000, 0b00111000, 0b11001000, 0b11110000, 0b11110000, 0b11100000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111110, 0b11111110, 0b11111101, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000001, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b01111111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000111, 0b00001011, 0b00011101, 0b00111110, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b01111111, 0b10111110, 0b11011101, 0b11101011, 0b11110111, 0b11100011, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b00000000, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000110, 0b00001110, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011111, 0b00011100, 0b00010011, 0b00001111, 0b00001111, 0b00000111, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 
};


const uint8_t *frames[] = {
  frame0_40x56,
  frame1_40x56,
  frame2_40x56,
  frame3_40x56,
  frame4_40x56,
  frame5_40x56,
  frame6_40x56,
  frame7_40x56,
  frame8_40x56,
  frame9_40x56
};



#define PIN_SPEED 2   // speed pulse pin
#define PIN_TYPE  3   // pin to choose m/h or km/h 
#define Y_POSITION 8  // vertical position, center screen value: 4
#define INTERRUPT_SPEED 0


// graphics library
#include <GyverOLED.h>
GyverOLED<SSD1306_128x64, OLED_BUFFER> oled;

// settings for averaging buffer
#define SPEEDBUFSIZE  70
#define SPEEDAVGINTERVAL 1000 // 1000ms = 1sec

// data struct for averaging buffer
struct SPEEDMARK {
  float speed;
  unsigned long time;
};

// averaging buffer
SPEEDMARK speedbuf[SPEEDBUFSIZE];
volatile unsigned int speedhead = 0;

// add new speed value to the averaging buffer
void AddSpeed(float s) {
  speedbuf[speedhead].speed = s;
  speedbuf[speedhead].time = millis();
  speedhead++;
  if (speedhead == SPEEDBUFSIZE) speedhead = 0;
}

// get average speed for SPEEDAVGINTERVAL period
float GetAvgSpeed() {
  unsigned int strart = speedhead;
  unsigned int i = strart;
  unsigned long t = millis() - SPEEDAVGINTERVAL;
  float sum = 0;
  unsigned int cnt = 0;
  while (true) {
    if (i == 0) i = SPEEDBUFSIZE;
    i--;
    if (i == strart) break;
    if (speedbuf[i].time < t) break;
    sum += speedbuf[i].speed;
    cnt++;
  }
  if (cnt) sum /= cnt;
  return sum;
}

// interrupt is fired each impuls of speed signal 10hz equals 30km/h
// it calculates the current speed by counting time between impulses
// and adds it to the averaging buffer
void InterruptSpeed() {
  static unsigned long prev = 0;
  unsigned long cur = millis();
  float dif = cur - prev;
  if (dif > 0) {
    float s = 3000.0 / dif + 0.5;
    AddSpeed(s);
  }
  prev = cur;
}

// converts speed to miles if requred and
// print images of digits to the screen
void PrintSpeed() {
  float miles = 1;
  if (digitalRead(PIN_TYPE)) miles = 1.60934; // miles/kilometers coefficient
  unsigned int speed = GetAvgSpeed() / miles;
  speed = speed % 999;
  unsigned int d1, d2, d3;
  d1 = speed / 100;		// 100
  d2 = (speed % 100) / 10;    	//  10
  d3 = (speed % 10);		//   1

  oled.clear();
  if (d1 == 0) {
    if (miles == 1) oled.drawBitmap(4, 36+Y_POSITION,  frame_kmh_40x16, 40, 16); // kilometers
    else            oled.drawBitmap(4, 36+Y_POSITION,  frame_mh_40x16, 40, 16);  // miles
  }

  if (d1)       oled.drawBitmap(4,  Y_POSITION, frames[d1], 40, 56);
  if (d1 || d2) oled.drawBitmap(44, Y_POSITION, frames[d2], 40, 56);
                oled.drawBitmap(84, Y_POSITION, frames[d3], 40, 56);
  oled.update();
}

// initialization - runs only ones
void setup() {
  pinMode(PIN_TYPE, INPUT_PULLUP);
  pinMode(PIN_SPEED, INPUT_PULLUP);

  oled.init();
  oled.flipV(true);  // flip screen 180deg
  oled.flipH(true);  //
  oled.setContrast(0);
  oled.clear();
  PrintSpeed();

  delay(3000);

  attachInterrupt(INTERRUPT_SPEED, InterruptSpeed, FALLING);
}

// main loop - just preent speed and wait 0.1sec
void loop() {
  PrintSpeed();
  delay(100);
}
