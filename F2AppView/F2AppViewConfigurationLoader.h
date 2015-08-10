//  Created by michael.leber on 8/10/15.
//  Copyright (c) 2015 Markit. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  This class loads a set of configurations mapped to a given identifier. The configuration can later be retrieved when an F2AppView needs to load content.
 */
@interface F2AppViewConfigurationLoader : NSObject

/**
 *  This method expects an Array of configuration JSON file names. It will attempt to locate the file name from a given 
 *
 *  @param configurations <#configurations description#>
 *  @param error          <#error description#>
 *
 *  @return <#return value description#>
 */
- (instancetype)initWithJSONConfigurations:(NSArray*)configurations error:(__autoreleasing NSError**)error;
@end
