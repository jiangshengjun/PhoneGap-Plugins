//
//  Badge.m
//
//  Created by Simon Madine of The Angry Robot Zombie Factory.
//  MIT licensed
//

#import "Badge.h"


@implementation Badge
- (void)setBadge:(NSMutableArray*)badgeNumber withDict:(NSMutableDictionary*)options
{
	[[UIApplication sharedApplication] setApplicationIconBadgeNumber:[[ badgeNumber objectAtIndex:0] intValue]];
}
@end