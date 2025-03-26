CC := gcc

all: football temperature

football: football_main.c football.c
	$(CC) football_main.c football.c -o football

temperature: temperature_main.c temperature.c
	$(CC) temperature_main.c temperature.c -o temperature

clean:
	rm -f football temperature