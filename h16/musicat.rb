class Song
  attr_accessor :name, :artist, :genre, :subgenre, :tags

  def initialize(string)
    song = strip_spaces(string.split('.'))
    @name = song.first.strip
    @artist = song[1].strip
    @genre = song[2].split(',').first.strip
    @subgenre = set_subgenre(song)
    @tags = set_tags(song)
  end
  
  def set_subgenre(song)
    @subgenre = song[2].split(',').slice(1, song.length).first
    @subgenre.strip! if @subgenre
  end

  def set_tags(song)
    @tags = song[3] ? strip_spaces(song[3].split(',')) : []
    @tags << @genre.downcase
    @tags << @subgenre.downcase if @subgenre
    @tags
  end
  
  def strip_spaces(array)
    array.map { |element| element.strip }
  end

  def match_field?(field, value)
    unless value.end_with?('!')
      field.to_proc.(self).include?(value)
    else
      not field.to_proc.(self).include?(value.chomp('!'))
    end
  end
end

class Collection
  attr_accessor :songs, :artist_tags
  
  def initialize(song_as_string, artist_tags)
    @songs = song_as_string.split("\n").map { |line| Song.new(line) }
    add_tags(artist_tags)
  end
  
  def add_tags(hash)
    result = []
    hash.each do |artist, tags|
      helper = @songs.select { |song| song.artist == artist }
      helper.map { |song| song.tags += tags }
      result += helper
    end
  end
  
  def find(criteria)
    unless criteria.empty?
      result = get_valid_song(criteria)
      result.inject() { |song, another_song| song & another_song }
    else
      @songs.select { |song| true }
    end
  end
  
  def get_valid_song(hash)
    result = []
    hash.each do |key, value|
      if value.kind_of?(Array)
        value.each do |element|
          result << get_songs_by_criteria(key, element)
        end
      elsif value.kind_of?(Proc)
        result << get_songs_by_proc(value)
      else
        result << get_songs_by_criteria(key, value)
      end
    end
    result
  end
  
  def check_array_for_fields(array)
    array.each do |element|
      result << @songs.select { |song| song.match_field?(key, element) }
    end
  end
  
  def get_songs_by_criteria(option, value)
    @songs.select { |song| song.match_field?(option, value) }
  end
  
  def get_songs_by_proc(proc)
    @songs.select { |song| proc.call(song) }
  end
end
