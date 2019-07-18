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
  
    s.public_header_files = 'YZJMessageSDK/Classes/public/**/*.{h}'
    s.source_files = 'YZJMessageSDK/Classes/**/*'
   
   #s.resources = ['YZJMessageSDK/Assets/*.xcassets', 'YZJMessageSDK/Assets/*.xib', 'YZJMessageSDK/Assets/YZJMessageSDK1.bundle']
   #s.resources = ['YZJMessageSDK/Assets/*.xcassets', 'YZJMessageSDK/Assets/YZJMessageSDK1.bundle']

   s.resources = [
        'YZJMessageSDK/Assets/*.xcassets',
        'YZJMessageSDK/Assets/*.xib',
        'YZJMessageSDK/Assets/Expression/**/*',
        'YZJMessageSDK/Assets/voices/*.xib'
    ]
   s.resource_bundles = {
      'YZJMessageSDK1' => ['YZJMessageSDK/Assets/YZJMessageSDK1/*']
   }

    s.user_target_xcconfig = {
        'GCC_PREPROCESSOR_DEFINITIONS' => 'MAS_SHORTHAND=1',
    }
    
    s.pod_target_xcconfig = {
        'GCC_PREPROCESSOR_DEFINITIONS' => 'MAS_SHORTHAND=1',
        'OTHER_LDFLAGS' => '-lObjC',
        'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES',
        'ENABLE_BITCODE' => 'NO'
    }
    
    s.prefix_header_file = 'YZJMessageSDK/Classes/public/YZJMessageSDK.pch'    #PCH文件
    
    #系统依赖库
    s.frameworks = 'UIKit', 'Foundation', 'CoreTelephony', 'SystemConfiguration', 'AVFoundation', 'AudioToolbox', 'CoreLocation', 'Contacts', 'AddressBook', 'QuartzCore', 'CoreGraphics', 'DeviceCheck', 'AVKit', 'CoreVideo', 'OpenAL', 'Accelerate', 'Accounts', 'AddressBookUI', 'AdSupport', 'ARKit', 'AssetsLibrary',  'BusinessChat','AuthenticationServices', 'CarPlay', 'CFNetwork', 'ClassKit', 'ContactsUI', 'CoreAudio', 'CoreAudioKit', 'CoreBluetooth', 'CoreData', 'CoreFoundation', 'CoreImage', 'CoreMedia', 'CoreMIDI', 'CoreML', 'CoreMotion', 'CoreServices', 'CoreSpotlight', 'CoreText', 'EventKit', 'EventKitUI', 'ExternalAccessory', 'FileProvider', 'FileProviderUI', 'GameController', 'GameKit', 'GameplayKit', 'GLKit', 'GSS', 'HealthKit', 'HealthKitUI', 'HomeKit', 'iAd', 'IdentityLookup', 'IdentityLookupUI', 'ImageIO', 'Intents', 'IntentsUI', 'IOKit', 'IOSurface', 'JavaScriptCore', 'LocalAuthentication', 'MapKit', 'MediaAccessibility', 'MediaPlayer', 'MediaToolbox', 'Messages', 'MessageUI', 'Metal', 'MetalKit', 'MetalPerformanceShaders', 'MobileCoreServices', 'ModelIO', 'MultipeerConnectivity', 'NaturalLanguage', 'Network', 'NetworkExtension', 'NewsstandKit', 'NotificationCenter', 'OpenGLES', 'PassKit', 'PDFKit', 'Photos', 'PhotosUI', 'PushKit', 'QuickLook', 'ReplayKit', 'SafariServices', 'SceneKit', 'Security', 'Social', 'Speech', 'SpriteKit', 'StoreKit', 'Twitter', 'UIKit', 'UserNotifications', 'UserNotificationsUI', 'VideoSubscriberAccount', 'VideoToolbox', 'Vision',
    'WatchConnectivity', 'WatchKit', 'WebKit'
    
    
    s.libraries = 'z', 'resolv.9', 'c++', 'iconv', 'c'
    
    s.vendored_frameworks = 'YZJMessageSDK/Assets/mars.framework'
    
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
