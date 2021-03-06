# Технологично училище електронни системи
# Ива Йорданова Добрева
# 11Б клас
# номер 17
# Да се реализира полски калк.

class PolishNotation
	def parse(inp)
		stack = []
		inp.lstrip!
		while inp.length>0
			case inp
				when /\A-?\d+(\.\d+)?/
					stack.push($&.to_f)
				when /\S*/
					second_op = stack.pop()
					first_op = stack.pop()

					stack.push(first_op.send($&, second_op))
			end
		
			inp = $'
			inp.lstrip!
		end

		stack.pop()
	end
end
c = gets

str =PolishNotation.new

p str.send(:parse, c)



