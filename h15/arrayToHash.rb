class Array
	def to_hash
  		self.inject({}) { |key, val| key[val[0]] = val[1]; key }
  	end

	def index_by
		self.inject({}) { |hash, element| hash[yield(element)] = element; hash }
	end

	def subarray_count sub
		counter = 0
		(0..(self.length - sub.length)).each do |i|
			if sub == self[i, sub.length]
				counter += 1
			end
		end
		counter
	end

	def occurences_count
    	hash = Hash.new(0)
   	self.each { |el| hash[el] = self.count(el) }
   	hash
   end

	def densities
	    arrn = []
	    self.each { |el| arrn	 << self.count(el) }
	    arrn
	end
end
