integra.png : integra.dat integra.py
	python integra.py

integra.dat : integra.x
	./integra.x > integra.dat

integra.x : integra.cpp
	c++ integra.cpp -o integra.x