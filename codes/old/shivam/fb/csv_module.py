# import pandas
# import sqlite3

# def db():
# 	conn = sqlite3.connect('fb.sqlite')
# 	conn.execute('''CREATE TABLE atendy
#        (ID INT PRIMARY KEY     NOT NULL,
#        NAME           TEXT     NOT NULL,
#        EMAIL          TEXT UNIQUE    NOT NULL);''')
# 	conn.close()

# def update_detials(file_name=None):
# 	try:
# 		conn = sqlite3.connect('test.db')
# 		cursor = conn.execute("SELECT id, name, email  from atendy")
# 		file  = pandas.read_csv(file_name)
# 		conn.execute("INSERT INTO atendy (ID, NAME, EMAIL) VALUES (1, 'SHIVAM', 'JINDALSHIVAM65@GMAIL.COM')")
# 		conn.commit()
# 	except Exception as e :
# 		print e

# update_detials()

