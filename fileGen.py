def chead():
	fname = input("Enter the name of the header file : ")
	nFname = fname + '.h'
	fhand = open(nFname, 'w')
	ufname = fname.upper()
	line = '#ifndef '+ ufname +'_H_INCLUDED\n#define '+ ufname + '_H_INCLUDED\n\n#endif' 
	fhand.write(line)
	fhand.close()


def html():
	fname = input("Enter the name of the html file : ")
	nFname = fname + '.html'
	fhand = open(nFname, 'w')
	line ="<HTML>\n<HEAD>\n<TITLE>\n\n</TITLE>\n\n</HEAD>\n<BODY>\n\n</BODY>\n</HTML>" 
	fhand.write(line)
	fhand.close()

def javagen():
	fname = input("Enter the name of the java file : ")
	nFname = fname + '.java'
	fhand = open(nFname, 'w')
	line = "import.java.util.scanner\nclass " + fname + "{\npublic static void main(String[] argv){\n }\n}"
	fhand.write(line)
	fhand.close()

def phpgen():
	fname = input("Enter the name of the php file: ")
	nFname = fname + '.php'
	fhand = open(nFname, 'w')
	line = "<?php \n ?>"
	fhand.write(line)
	fhand.close()

inp = input("Enter 1 for header files\nEnter 2 for html files\nEnter 3 for java files\nEnter 4 for php files: ")
try:
	inp = int(inp)
	if inp == 1:
		chead()
	elif inp == 2:
		html()
	elif inp == 3:
		javagen()
	elif inp == 4:
		phpgen()
except:
	print("Enter a vaild number")