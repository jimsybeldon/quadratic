import sys
sys.path.insert(0, '/usr/lib/python2.7/bridge')
 
from time import sleep
from bridgeclient import BridgeClient as bridgeclient

value = bridgeclient()

firstLight = 0
secondLight = 1

while(True):
	firstLight = not(firstLight)
	secondLight = not(secondLight)
	value.put('D12', str(firstLight))
	value.put('D13', str(secondLight))
	sleep(5)
	print([firstLight, secondLight])