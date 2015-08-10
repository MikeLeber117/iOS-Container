//  Created by michael.leber on 8/10/15.
//  Copyright (c) 2015 Markit. All rights reserved.
//
//
// @TODO: - Need to do a couple things here.
// 1. Need to subclass a JSON object modeling framework (e.g. Mantle, or JSONModel)
//    a. consider using Cocoapods, since, need to weigh this against it being open source, (probably a YES than)
// 2. Need a way to easily convert this to a NSString JSON for a URL
//    a. This is probably handled via the model object framework above
// 3. Need another class to create all configs, e.g. something that is initialized with a key -> fileNameInBundle or something that can return all F2AppViewConfiguration via view identifier key for each view
// 4. Ultimately, this needs to be passed to F2 via the following. http://<manifestURL>/json?params=[<self>]  // self needs to be wrapped into an array
#import <Foundation/Foundation.h>


@interface F2AppViewConfiguration : NSObject
@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSURL *manifestURL;
@property (nonatomic, copy) NSString *appName;

// Optional, this value can be nil
@property (nonatomic, copy) NSDictionary *additionalContext;
@end
