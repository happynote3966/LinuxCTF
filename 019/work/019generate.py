def main():
	str = ""
	f = open("uniqme.txt","a")
	for i in range(0,100000):
		str += "A" * 100 + "\n"

	str += "linuxctf{Unique_message}\n"

	for i in range(0,100000):
		str += "A" * 100 + "\n"

	f.write(str)
	f.close()

if __name__ == '__main__':
	main()
