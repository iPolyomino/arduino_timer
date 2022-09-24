const int Pin[7] = { 2, 4, 6, 7, 8, 10, 12 };

const int DotPin = 10;

int counter = 0;

const int number[10][7] = {
	{ 1, 0, 1, 1, 1, 1, 1 },        // 0
	{ 0, 0, 0, 0, 0, 1, 1 },        // 1
	{ 0, 1, 1, 1, 1, 1, 0 },        // 2
	{ 0, 1, 0, 1, 1, 1, 1 },        // 3
	{ 1, 1, 0, 0, 0, 1, 1 },        // 4
	{ 1, 1, 0, 1, 1, 0, 1 },        // 5
	{ 1, 1, 1, 1, 1, 0, 1 },        // 6
	{ 0, 0, 0, 0, 1, 1, 1 },        // 7
	{ 1, 1, 1, 1, 1, 1, 1 },        // 8
	{ 1, 1, 0, 1, 1, 1, 1 }         // 9
};

void setup()
{
	for (int i = 0; i < 7; i++) {
		pinMode(Pin[i], OUTPUT);
		digitalWrite(Pin[i], LOW);
		if (number[counter][i] == 1) {
			digitalWrite(Pin[i], LOW);
		} else {
			digitalWrite(Pin[i], HIGH);
		}
	}
}

void loop()
{
	for (int i = 0; i < 7; i++) {
		if (number[counter][i] == 1) {
			digitalWrite(Pin[i], LOW);
		} else {
			digitalWrite(Pin[i], HIGH);
		}
	}
	counter += 1;
	counter %= 10;
	delay(1000);
}
