##Технологично училище "Електронни системи" към ТУ - София
##www.elsys-bg.org
##клас 11Б
##номер 17
##име Ива Йорданова Добрева

##        Кой е най-свързаният номер в клас - всеки ученик получава листа от друг. Написва си номера на него. Човекът, който е получил лист най-много пъти е най-свързаният номер в клас
##        Кой е най-малко свързаният номер в клас - аналогично на горната, човекът написал най-малко пъти номера си е най-малко свързаният.
 ##       За всеки номер да се намери на кой номер е предал листа най-много пъти - ако на даден лист поредния номер е 4, а следващият е 7 то номер 4 е предал листа на номер 7. Номер 4 е предал листа и на много други номера. Да се намери кой е номерът на който номер 4 е предал листа най-много пъти. Аналогично да се намери и за останалите номера.
##        За всеки номер да се намери кой номер му е предал листа най-много пъти - ако на даден лист поредния номер е 4, а следващият е 7 то номер 4 е предал листа на номер 7. Номер 7 е получил листа и от много други номера. Да се намери кой е номерът, който най-много пъти е дал листа на номер 7. Аналогично да се намери за всеки един номер.
##        За точки c и d да се намерят стойностите на най-малко предадените и получените листове.

require 'csv'

def most_common_value(a)
  	a.group_by do |e|
    		e
  	end.values.max_by(&:size).first
end

def most_rare_value(a)
  	a.group_by do |e|
    		e
  	end.values.max_by(&:size).last
end


def csv_files
	array = Array.new(29)
	pass = Array.new
	count = Array.new(29)
	i =0
	for i in 0..29 
		count[i]=0
	end

	for i in 0..29
		array[i]=0
	end

	for i in 0..29 
		pass[i]= ""
	end

	input_files = Dir.glob("*.csv")
	input_files.each do |filename|
		c = false
		index = 0
		CSV.foreach(filename) do |row|
			if c == true
				pass[index-1] = pass[index-1]+" "+row[0]+" "
			end
			index = row[0].to_i
			array[index-1]+=1
			c = true
		end
		
	end
	for i in 0..pass.index(pass.last) 
			count = pass[i].split(/ /)
			print "Number ", i+1, " passed to ", most_common_value(count), "\n";
			print "Number ", most_common_value(count), " recieved from ", i+1, "\n";	
			
	end

	for i in 0..29
			count = pass[i].split(/ /)
			print "Number ", i+1, " passed rarely to ", most_rare_value(count), "\n";
			print "Number ", most_rare_value(count), " recieved rarely from ", i+1, "\n";
	end

	for i in 0..29 
		if array[i] == array.max
			print "Most popular number is ", i+1, " - ", array[i], "\n";
		end
		if array[i] == array.min
			print "Most UNpopular number is ", i+1, " - ", array[i], "\n";
		end
	end

end

csv_files

