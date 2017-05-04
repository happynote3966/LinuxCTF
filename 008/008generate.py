import random
import string


def main():
	for i in range(0,5000):
		filename = gen_rand_str(4)
		f = open(filename,"a");
		f.close()


def gen_rand_str(length):
	chars = string.digits + string.letters
	return ''.join([random.choice(chars) for i in range(length)])


if __name__ == '__main__':
	main()
