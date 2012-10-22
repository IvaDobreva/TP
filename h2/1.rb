#Технологично училище "Електронни системи" към ТУ - София
#www.elsys-bg.org
#клас 11Б
#номер 17
#име Ива Йорданова Добрева

#Задача: Да се съберат числата от колона на CSV документ.

require 'csv'

def process_file_with_csv
	result = 0
	CSV.foreach("csv_example.csv") do |row|
  		result = result +row[1].to_i
	end

	p result

end

def process_file
	f = File.open("/home/student11b/csv_example.csv", "r")
	content = f.read
	result =0
	content.each_line do |line|
		array = line.split(",")
		result=result + array[1].to_i
	end
	puts result
end


process_file_with_csv
