require 'csv'

def process_file_with_csv
	result = 0
	CSV.foreach("/home/student11a/tp/csv_example.csv") do |row|
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
