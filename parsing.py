filename = '20170603.csv'

file_handle = open(filename,'r',encoding = 'utf-8-sig')
data = file_handle.read()

print(data)