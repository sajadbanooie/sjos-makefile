global setidt

extern idtp
setidt:
	lidt [idtp]
	ret
	
