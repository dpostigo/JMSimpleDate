Pod::Spec.new do |s|
  s.name         = "JMSimpleDate"
  s.version      = "0.0.3"
  s.summary      = "NSDate and NSDateFormatter wrappers including simplification and convenience methods."
  s.homepage     = "https://github.com/dpostigo/JMSimpleDate"
  s.license      = 'BSD'
  s.author       = { "Dani Postigo" => "dani@firstperson.is" }
  s.source       = { :git => "https://github.com/dpostigo/JMSimpleDate.git", :tag => s.version.to_s }
  s.platform     = :osx, '10.7'
  s.source_files = 'JMSimpleDate/*.{h,m}'
  s.requires_arc = true


end
