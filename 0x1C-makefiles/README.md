Makefile
* it's a way that allow you to put your whole process into one file and excute it with one command
* it can have :
				* shell commands to use
				* c files to excute
				* binary files ..etc
* Notes:
make file description:
		target: prerequisites
				<TAB> recipe
	where :
			-tagret : is a name of function in makefile (i choose it)
			-prerequists things to be done before excuting the (recipe)
			- recipe: bunch of orders to be done (it could be bash commands ..etc)

* (.PHONY): at the top of the file yo hold all targets you can use and excute it even there is no files
* all: you put all the functions to be done once you call (make) , other functions could be call by using (make function)
* using (@) before the command : hides the command and shows only its result
