
Pod::Spec.new do |s|

  s.name         = "ProgressHUDYG"
  s.version      = "0.0.1"
  s.summary      = "ProgressHUDYG with end complect block"
  s.description  = <<-DESC
  ProgressHUDYG with end complect block
                   DESC

  s.homepage     = "https://github.com/yu0089/ProgressHUDYG"

  s.license      = "MIT"

  s.author             = { "yu0089" => "yangsz1985@sina.com" }

  s.platform     = :ios, '7.0'
  s.source       = { :git => "https://github.com/yu0089/ProgressHUDYG.git", :tag => "0.0.1" }

  s.source_files  = "**/*.{h,m}"
  s.resources = "ProgressHUD.bundle/*.png"
  s.framework = "UIKit"
end
