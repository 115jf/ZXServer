#
# Be sure to run `pod lib lint ZXServer.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ZXServer'
  s.version          = '0.1.0'
  s.summary          = 'A short description of ZXServer.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
aaa.
                       DESC

  s.homepage         = 'https://github.com/1023273636@qq.com/ZXServer'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '1023273636@qq.com' => '1023273636@qq.com' }
  s.source           = { :git => 'https://github.com/1023273636@qq.com/ZXServer.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.vendored_frameworks = 'ZXServer/ZXSDK.framework'
  s.dependency 'AliyunOSSiOS' , '2.10.8'
  # s.source_files = 'ZXServer/Classes/**/*'
  
  # s.resource_bundles = {
  #   'ZXServer' => ['ZXServer/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
