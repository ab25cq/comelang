all: select.cgi select2.cgi login.cgi main.cgi food.cgi walking.cgi ball.cgi pet.cgi

select.cgi: select.c
	neo-c -o select.cgi select.c -g

select2.cgi: select2.c
	neo-c -o select2.cgi select2.c -g

login.cgi: login.c
	neo-c -o login.cgi login.c -g

main.cgi: main.c
	neo-c -o main.cgi main.c -g

food.cgi: food.c
	neo-c -o food.cgi food.c -g

walking.cgi: walking.c
	neo-c -o walking.cgi walking.c -g

ball.cgi: ball.c
	neo-c -o ball.cgi ball.c -g

pet.cgi: pet.c
	neo-c -o pet.cgi pet.c -g

clean:
	rm -f *.cgi food *.c.c *.c.o
