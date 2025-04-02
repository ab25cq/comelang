all: select.cgi select2.cgi login.cgi main.cgi food.cgi walking.cgi ball.cgi pet.cgi

select.cgi: select.c
	comelang -o select.cgi select.c -g

select2.cgi: select2.c
	comelang -o select2.cgi select2.c -g

login.cgi: login.c
	comelang -o login.cgi login.c -g

main.cgi: main.c
	comelang -o main.cgi main.c -g

food.cgi: food.c
	comelang -o food.cgi food.c -g

walking.cgi: walking.c
	comelang -o walking.cgi walking.c -g

ball.cgi: ball.c
	comelang -o ball.cgi ball.c -g

pet.cgi: pet.c
	comelang -o pet.cgi pet.c -g

clean:
	rm -f *.cgi food
