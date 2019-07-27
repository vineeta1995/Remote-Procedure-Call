Remote Procedure Call (RPC) is a protocol that one program can use to request a service from a program located in another computer on a network without having to understand the network's details.

How to run:

Build the files using the command make -f Makefile.question

On the server system, run the command ./question_server

On the client systems, run the command ./question_client IP_ADDRESS_OF_SERVER

  a)	IP_ADDRESS_OF_SERVER cal be found by executing the command ifconfig in the server machine
  
  b)	If using same system for client as server, then IP_ADDRESS_OF_SERVER is 127.0.0.1 (localhost)
  
  c)	Server identifies different clients using their IP address)

Select the required option on the client system.( The different options are displayed on screen).

Score.csv file is used to store the scores of clients.
