import sys
sys.path.insert(0, '/usr/lib/python2.7/bridge')
 
from time import sleep
from bridgeclient import BridgeClient as bridgeclient

value = bridgeclient()

firstLight = 0

while(True):
	firstLight = int(input('Input 0 or 1: '))
	value.put('D13', str(firstLight))