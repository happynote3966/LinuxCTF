import string
import random

def main():
	str = "grepme"
	f = open("grepme.txt",'a')
	for i in range(1000):
		str += gen_rand_str(100) + "\n"
	str += "linuxctf{grep_is_very_usuful_command!}\n"
	for i in range(1000):
		str += gen_rand_str(100) + "\n"

	f.write(str)
	f.close()

def gen_rand_str(length):
	chars = string.digits + string.letters
	return ''.join([random.choice(chars) for i in range(length)])


if __name__ == '__main__':
	main()
