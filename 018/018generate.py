import string
import random

def main():
	workstr = ""
	str1 = ""
	str2 = ""
	f1 = open("file1.txt","a")
	f2 = open("file2.txt","a")

	for i in range(0,10000):
		workstr += gen_rand_str(100) + "\n"

	str2 = str1 = workstr
	str1 += "linuxctf{it_is_easy_to_find_difference}\n"

	workstr = ""

	for i in range(0,10000):
		workstr += gen_rand_str(100) + "\n"

	str1 += workstr
	str2 += workstr
	f1.write(str1)
	f2.write(str2)
	f1.close()
	f2.close()

def gen_rand_str(length):
	chars = string.digits + string.letters
	return ''.join([random.choice(chars) for i in range(length)])


if __name__ == '__main__':
	main()
