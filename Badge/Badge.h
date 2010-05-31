//
//  Badge.h
//
//  Created by Simon Madine of The Angry Robot Zombie Factory.
//

#import <Foundation/Foundation.h>


#import "PhoneGapCommand.h"
@interface Badge : PhoneGapCommand {
}
- (void)setBadge:(NSMutableArray*)badgeNumber withDict:(NSMutableDictionary*)options;
@end
