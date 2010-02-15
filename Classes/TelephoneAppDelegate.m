//
//  TelephoneAppDelegate.m
//  Telephone
//
//  Created by Sue Brown on 2/15/10.
//  Copyright House of Crunchy 2010. All rights reserved.
//

#import "TelephoneAppDelegate.h"
#import "TelephoneViewController.h"

@implementation TelephoneAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
