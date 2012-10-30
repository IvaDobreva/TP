##Ива Добрева
## 11Б клас номер 17
## Да се намери сумата и запише във файл на първите 10 стойности


require 'csv'

output_name = "output_values.csv"
input_name = "feature_scenarios_times.csv" 
sum = 0 
x = 0 
CSV.open(output_name, "w") do |csv|
	CSV.foreach(input_name) do |row|
		value = row[0]
		if value != "" && x<=10
			value = value.to_f
			sum+= value
			x+=1
		end	
	end
	csv << [sum]
end
