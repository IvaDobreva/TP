class Objects
	 ##attr_accessor :value
	def value=(v)
		@value=v
	end
	
	def value
		@value
	end
	
	def method
		
	end
	
end

o = Objects.new
o.value
o.value = 10
p o.value
