all:
	gcc -I. main.c -Llib -lkirk -o decrypt_prx
	
clean:
	rm decrypt_prx