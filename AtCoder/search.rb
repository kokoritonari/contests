require 'open-uri'
require 'nokogiri'

user = 'c_r_5' #検索したいユーザ名

1.upto(31){|i|
    url = 'http://abc' + sprintf('%03d', i) + '.contest.atcoder.jp/submissions/all?user_screen_name=' + user
    charset = nil
    html = open(url) do |f|
        charset = f.charset
        f.read
    end
    doc = Nokogiri::HTML.parse(html, nil, charset)
    nodes = doc.css('table[class="table table-bordered table-striped table-wb"] > tbody > tr')
    next if nodes.size == 0
    puts 'AtCoder Beginner Contest ' + sprintf('%03d', i)
    nodes.each{|node|
        print node.css('td > a')[0].inner_text + "\t"
        print node.css('td.table-nwb')[1].inner_text + "\t"
        print node.css('td > span').inner_text + "\t"
        puts 'http://abc' + sprintf('%03d', i) + '.contest.atcoder.jp' + node.css('td > a')[3].attribute('href').value
    }
}
