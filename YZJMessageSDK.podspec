#
# Be sure to run `pod lib lint YZJMessageSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YZJMessageSDK'
  s.version          = '0.1.0'
  s.summary          = 'A short description of YZJMessageSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

    s.homepage         = 'https://github.com/1020146724@qq.com/YZJMessageSDK'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { '1020146724@qq.com' => 'ding_qu@kingdee.com' }
    s.source           = { :git => 'https://github.com/1020146724@qq.com/YZJMessageSDK.git', :tag => s.version.to_s }

    s.static_framework = true
    s.ios.deployment_target = '8.0'
    s.swift_version = '4.0'
  
    
    s.vendored_frameworks = 'YZJMessageSDK.framework'
    s.resource = "YZJMessageSDK1.bundle"

    s.resources = [
    'Assets/*.xcassets',
    'Assets/*.xib',
    'Assets/Expression/**/*'
    ]
    s.resource_bundles = {
    'YZJMessageSDK1' => ['Assets/YZJMessageSDK1/*']
    }
    
    # 公有库依赖
    s.dependency 'AFNetworking'
    s.dependency 'JSONModel'
    s.dependency 'Masonry'
    s.dependency 'SnapKit'
    s.dependency 'MenuItemKit'
    s.dependency 'lottie-ios'
    s.dependency 'pop'
    s.dependency 'MBProgressHUD'
    s.dependency 'DGActivityIndicatorView'
    s.dependency 'DACircularProgress'
    s.dependency 'SHSPhoneComponent'
    s.dependency 'SDWebImage'
    s.dependency 'SDWebImage/GIF'
    s.dependency 'FMDB'
    s.dependency 'SafeKit'
    s.dependency 'WCDB.swift'
    s.dependency 'RxSwift'
    s.dependency 'RxCocoa'
    s.dependency 'RxDataSources'
    s.dependency 'PromiseKit/CorePromise'
    s.dependency 'AMapLocation'

    s.dependency 'KDOpenCoreAmr'
    s.dependency 'KDMerc'
    #s.dependency 'KDFoundation'

    #s.dependency 'SSZipArchive'
    
end
