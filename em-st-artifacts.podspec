Pod::Spec.new do |spec|
  spec.name         = "em-st-artifacts"
  spec.version      = "1.0.4"
  spec.summary      = "Math Library for determining emotional state."
  spec.homepage     = "https://gitlab.com/neurosdk2/neurosamples"
  spec.license      = { :type => 'MIT' } 
  spec.author       = { "BrainBit INC." => "support@brainbit.com" }
  spec.ios.deployment_target = "12.0"
  spec.osx.deployment_target = "10.14"
  spec.source       = { :git => "https://github.com/BrainbitLLC/apple_em-st-artifacts.git", :tag => "#{spec.version}" }
  spec.osx.vendored_frameworks = 'EmStArtifacts.xcframework'
  spec.ios.vendored_frameworks = 'EmStArtifacts.xcframework'
end
