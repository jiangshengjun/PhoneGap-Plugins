//
//  Screenshot.h
//
//  Created by Simon Madine of The Angry Robot Zombie Factory.
//

#import <Foundation/Foundation.h>
#import "PhoneGapCommand.h"
@interface Screenshot : PhoneGapCommand {
}

- (void)saveScreenshot:(NSArray*)arguments withDict:(NSDictionary*)options;
@end
