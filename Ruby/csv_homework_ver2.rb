require 'csv'

def process_file_with_csv
	result1 = 0
	result2 = 0
	rb=0
	py=0
	CSV.foreach("csv_example.csv") do |row|
		if row[3] == "python"
  			result1 = result1 +row[1].to_i
			py+=1;
		elsif row[3] == "ruby"
			result2 = result2 + row[1].to_i
			rb+=1 
		end	
	end
	p "Python numbers sum" , result1
	p "Ruby numbers sum" , result2
	p "Ruby completed tasks: ", rb
	p "Python completed tasks: ", py

end

process_file_with_csv
